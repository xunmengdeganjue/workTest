/**
	Copyright(C) 2014 Skysoft Info&Tech Co.,Ltd. All right reserved.
	@file services.c
	@brief services Function File.
	@author Nick Li (nick.li@cdskysoft.com)
	@version 1.0
	@date 2015-05-07(Create)
	@todo Something in plan.
	@details detail description of this file.
**/ 
/* Include files. */
#include <sys/socket.h>   
#include <netinet/in.h>   
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <errno.h>
#include <err.h>
#include "cgi-lib.h"
#include "html-lib.h"
#include "cgi_main.h"
#include "mylib.h"
#include "log.h"
#include "json.h"
#include "uci_cfg.h"
#include "suci.h"
#include "command.h"

#include <grp.h>

extern t_log_p cgi_log;

#include <dirent.h> //for the getsubdir()
#include <sys/stat.h>

/*
*Func: 	dealwithpath
*Parm:	path		---the shared path of the serivce(/mnt/sdb1/ or /mnt/sdb1/sub-folder).
*		service	---the service name (samba/ftp)
*
*Return:
*		1		---the path of the service shared is the partition share,and the func has already delete all of the shared sub folders. 
*		0		---the path of the service shared is the sub folder of a partition.
*		-1		---there is something error.
*/
int dealwithpath(const char *path,char *service){
	cgi_trace_enter();
	int ret = -1;
	char opt_value[128] = {0};
	char dest_share[128] = {0};
	char dest_option[128] = {0};
	int i = 0;
	int layer_count = 0;
	int part_flag = 0; /*flag of the partition name shared*/
	
	/*judge if the path's basename is a partition name */
	cgi_dbg("the path start is %s\n",path);
	for(i = 0;i<strlen(path);i++){
		if(path[i]=='/'){
			layer_count ++;
		}
	}
	
	cgi_dbg("the path end is %s\n",path);
	cgi_dbg("the layer_count is %d\n",layer_count);
	
	if(layer_count == 2){
		part_flag = 1;
	}else if (layer_count == 3){
		ret = 0;
		goto end;
	}else{
		ret = -1;
		goto end;
	}
	
	
	i = 0;
	
	for(;;){
		memset(dest_option,0x00,sizeof(dest_option));
		sprintf(dest_option,"%s.@share[%d].path",service,i);
		memset(dest_share,0x00,sizeof(dest_share));
		sprintf(dest_share,"%s.@share[%d]",service,i);
		memset(opt_value,0x00,sizeof(opt_value));
		ret = do_uci_get(dest_option,opt_value);
		if(!ret){
			if(!strcmp(opt_value,path)){/*the dest option-path is same as the path*/
				//continue;
				do_uci_delete(dest_share,NULL);/*delete the dest shared path*/
			}else if(strstr(opt_value,path)){
				do_uci_delete(dest_share,NULL);/*delete the dest shared path*/
			}
		}else{
			break;
		}
		
		i++;
		
	}
	if(part_flag){
		ret = 1;
	}
end:

	cgi_trace_exit();
	return ret ;

}
/*
*Func :	getsubdir
*Parm:	root_dir ---the desstination directory that to be scaned
*		depth    ---the depth of the directory that to be sanned
*		dirs 	 ---the container of the sub-dirs of the root_dir
*Return: successed 0;failed -1.
*/
int getsubdir(char *root_dir,int depth,char dirs[][128])
{
	DIR *dp;
	struct dirent *entry;
	struct stat statbuf;
	int i = 0;
	if((dp = opendir(root_dir)) == NULL )
	{
		fprintf(stderr,"cant open directory: %s\n",root_dir);
		return -1;
	}
	chdir(root_dir);
	while((entry = readdir(dp)) != NULL)
	{
		lstat(entry->d_name,&statbuf);
		if(S_ISDIR(statbuf.st_mode))
		{
			/*found a directory,but ignore . and ..*/
			if(strcmp(".",entry->d_name) == 0 || strcmp("..",entry->d_name) == 0 )
			{		
				continue;
			}
			//printf("%*s%s/\n",depth,"",entry->d_name);
			strcpy( dirs[i], entry->d_name );
			i++;
		}
	}
	chdir("..");
	closedir(dp);
	return 0;
}

int getdlnainfo(tcm_session *session, char *name, char *val, char *list)
{

	cgi_trace_enter();
	int ret = -1;
	json_object *obj = NULL;
	json_object *array = NULL;
	json_object *client[32] = {NULL};
	char flow[2048] = {0};
	
	char tmparray[128] = {0};
	//char media_dirs[2048] = {0};
	char *dirs=(char *)malloc(2048*sizeof(char));
	char *buffer=(char *)malloc(2048*sizeof(char));
	char media_type[32] = {0};
	char media_path[128] = {0};
	char buffer_tmp[128] = {0};
	int i = 0;
	char *p = NULL;

	obj = json_object_new_object();
	
	cgi_trace_line();
	
	memset(tmparray, 0x00, sizeof(tmparray));
	ret = do_uci_get(DLNA_ENABLE,tmparray );
	if(!ret){
		json_object_object_add(obj, "IsEnable",  json_object_new_string(tmparray));
		cgi_dbg("the isenabel is%s\n",tmparray);
	}

	
	memset(tmparray, 0x00, sizeof(tmparray));
	ret = do_uci_get(DLNA_SERVER_NAME, tmparray);
	if(!ret){
		json_object_object_add(obj, "ServerName", json_object_new_string(tmparray));
		cgi_dbg("the servername is%s\n",tmparray);
		cgi_trace_line();
	}

	
	/*There for the dlan_server_status TOBEDONE*/
	json_object_object_add(obj, "ServerStatus", json_object_new_string("IDle"));
	cgi_dbg("the serverstatus is%s\n",tmparray);
	
	memset(tmparray, 0x00, sizeof(tmparray));
	ret = do_uci_get(DLNA_DIR_MANUAL, tmparray);
	if(!ret){
		json_object_object_add(obj, "ServerPathSetting", json_object_new_string(tmparray));
		cgi_dbg("the ServerPathSetting is%s\n",tmparray);
		cgi_trace_line();
	}

	memset(dirs,0x00,2048);
	ret = do_uci_get(DLNA_DIRS,dirs);
	//if( (ret == 0)  &&  (media_dirs[0] != 0) ){
	if(ret == 0){
		cgi_trace_line();
		array=json_object_new_array();
		/*split the dirs refer to the space*/
		while((p=strtok(dirs," "))!=NULL){
			strcpy(buffer,p);
			client[i]= json_object_new_object();
			/*get the A V P arguments*/
			//char *p;
			strcpy(buffer_tmp,buffer);
			p= strchr(buffer,',');
			*p = '\0';
			strcpy(media_type,buffer);
			p = strchr(buffer_tmp,',');
			p++;
			strcpy(media_path,p);
			cgi_dbg("the media_path is:[%s]\n",media_path);

			cgi_dbg("the media_type is:[%s]\n",media_type);
			
			//json_object_object_add(client[i],"Dir",json_object_new_string(buffer));
			json_object_object_add(client[i],"Dir",json_object_new_string(media_path));

			json_object *array1=json_object_new_array();	
			if(strchr(media_type,'A')){
				json_object_array_add(array1,json_object_new_int(0));
			}
			if(strchr(media_type,'P')){
				json_object_array_add(array1,json_object_new_int(1));
			}
			if(strchr(media_type,'V')){
				json_object_array_add(array1,json_object_new_int(2));
			}
			json_object_object_add(client[i],"FileType",array1);
			json_object_array_add(array, client[i]);
			dirs = NULL;
			if( i >= 31) break;
			i++;
		}
		json_object_object_add(obj, "ServerPath", array);
		cgi_dbg("the arrsy is %s\n",json_object_to_json_string(array));
	}
	cgi_trace_line();
	
	strcpy(flow, json_object_to_json_string(obj));
	
	if (val == NULL) {
		fprintf(stdout, "%s", flow);
	} else {
		sprintf(val, "%s", flow);
	}
	cgi_trace_line();

	json_object_put(obj);

	for ( i = 0; i < 32; i++) {
		json_object_put(client[i]);	
	}

	cgi_trace_exit();
	
	return ret;
	
}
int setdlnainfo(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();
	int ret = -1;
	
	json_object *i_obj = NULL;
	json_object *sub_obj = NULL;
	json_object *media_dirs = NULL;
	json_object *cli_obj = NULL;
	json_object *item = NULL;
	json_object *sub_item =NULL;
	
	int dlna_enable = 0;
	char servername[128] ={ 0};
	int alldirsshare = 0;
	//char allpart[100][128]={{0}};//if all of the directories should be shared
	//char alldirs[100][128]={{0}};
	int i = 0;
	int j = 0;
	char sharedfolder[128]={0};
	json_object *media_type = NULL;
	int sub_type = 3;//becase the 0:audio;1:picture;2:vidio
	char linebuffer[2048] = {0};
	int dlna_shutdown_flag = 0;
	char media_type_sub[32] = {0};
	char *p = NULL;
	
	i_obj = json_tokener_parse(list);
	
	cgi_dbg("The orginal data frome the website is [%s]\n",list);
	
	json_object_object_get_ex(i_obj, "IsEnable", &sub_obj);
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("Set dlna server option failed\n");
		goto error;
	}
	dlna_enable = json_object_get_int(sub_obj);
	if(dlna_enable == 1){
		ret = do_uci_set(DLNA_ENABLE, "1");
		if(ret){
			goto error;
		}
		//json_object_put(sub_obj);
		json_object_object_get_ex(i_obj, "ServerName", &sub_obj);
		if(sub_obj){
			strcpy(servername,json_object_get_string(sub_obj));
			ret = do_uci_set(DLNA_SERVER_NAME,servername);
			if(ret){
				goto error;
			}
			//json_object_put(sub_obj);
		}
		json_object_object_get_ex(i_obj, "ServerPathSetting", &sub_obj);
		if(sub_obj){
			alldirsshare = json_object_get_int(sub_obj);
			memset(linebuffer, 0x00 ,sizeof(linebuffer));	
			sprintf(linebuffer,"%d",alldirsshare);
			ret = do_uci_set(DLNA_DIR_MANUAL,linebuffer);
			if(ret){
				goto error;
			}
			//json_object_put(sub_obj);
			if(alldirsshare==0){//all disks shared
				memset(linebuffer, 0x00 ,sizeof(linebuffer));	
				ret = do_uci_get(DLNA_DIRS,linebuffer);
				if(!ret){
					ret = do_uci_delete(DLNA_DIRS,NULL);/*delete the old shared folders*/
					if(ret){
						cgi_dbg("Delete the old share folders failed!\n");
						goto error;
					}
				}
				
				memset(linebuffer, 0x00 ,sizeof(linebuffer));	
				sprintf(linebuffer,"AVP,/mnt/");//all media type allowed
				ret = do_uci_add_list(DLNA_DIRS, linebuffer);
				if(ret){
					goto error;
				}
#if 0				
				ret = getsubdir("/mnt",0,allpart);
				if(ret  == -1){
					goto error;
				}
				for(i = 0;i<100;i++){
					if(allpart[i][0] != 0){
						cgi_dbg("allpart dir is:%s\n",allpart[i]);	
						memset(linebuffer, 0x00 ,sizeof(linebuffer));	
						sprintf(linebuffer,"/mnt/%s",allpart[i]);
						ret = getsubdir(linebuffer,0,alldirs);
						if(ret  == -1){
							goto error;
						}
						for(j = 0;j<100;j++){
							if(alldirs[j][0]!= 0 ){
								memset(linebuffer, 0x00 ,sizeof(linebuffer));	
								sprintf(linebuffer,"AVP,/mnt/%s/%s",allpart[i],alldirs[j]);//all media type allowed
								cgi_dbg("the dest dir is:%s\n",linebuffer);
								ret = do_uci_add_list(DLNA_DIRS, linebuffer);
								if(ret){
									goto error;
								}
							}
						}
					}
				}
#endif
		
			}else{
				json_object_object_get_ex(i_obj, "ServerPath", &media_dirs);
				if(media_dirs){
					memset(linebuffer, 0x00 ,sizeof(linebuffer));	
					ret = do_uci_get(DLNA_DIRS,linebuffer);
					if(ret == 0 ){/*means that there are some share folders.*/
						ret = do_uci_delete(DLNA_DIRS,NULL);/*delete the old shared folders*/
						if(ret){
							cgi_dbg("Delete the old share folders failed!\n");
							goto error;
						}
					}
				
					cgi_dbg("media_dirs: %s\n",  json_object_to_json_string(media_dirs));
					
					if(json_type_array == json_object_get_type(media_dirs)){
						for(i=0; i < json_object_array_length(media_dirs); i++){
							//memset(sharedfolder, 0x00 ,sizeof(sharedfolder));	
							item = json_object_array_get_idx(media_dirs, i);
							json_object_object_get_ex(item, "Dir", &cli_obj);

							memset(sharedfolder, 0x00 ,sizeof(sharedfolder));	
							strcpy(sharedfolder, (char*)json_object_get_string(cli_obj));
							if(strcmp(sharedfolder,"/mnt/")==0){
								continue;
							}

							cgi_dbg("sharefolders %d : is[%s]\n",i,sharedfolder);
							
							//do_uci_add_list(DLNA_DIRS, sharedfolder);/*here must add the media type option*/
							
							/*here to deal with the media type*/
							//memset(linebuffer, 0x00 ,sizeof(linebuffer));
							//sprintf(linebuffer,"echo \"%s section\" >> /tmp/minidlna_mediatype",sharedfolder);
							//ret = do_cmd(linebuffer);
	
							memset(media_type_sub,0x00,sizeof(media_type_sub));
							p = media_type_sub;
							
							json_object_object_get_ex(item, "FileType", &media_type);
							if(json_type_array == json_object_get_type(media_type)){
								cgi_trace_line();
								for (j = 0; j  < json_object_array_length(media_type); j++ ){
									
									cgi_trace_line();
									//json_object *sub_item =NULL;
									sub_item =  json_object_array_get_idx(media_type, j);
									sub_type =  json_object_get_int(sub_item);
									//if(sub_type != 3){
									//cgi_dbg("the sub_type is %d\n",sub_type);
									if(sub_type ==0){
										p += sprintf(p,"%s","A");
									}else if(sub_type == 1){
										p += sprintf(p,"%s","P");
									}else if(sub_type == 2){
										p += sprintf(p,"%s","V");
									}else{
										continue;
									}
									cgi_dbg("the %d time sub_type is [%d] \n",j,sub_type);
									//}									
									//memset(linebuffer, 0x00 ,sizeof(linebuffer));
									//sprintf(linebuffer,"echo \" sub_mediatype:%d\" >>/tmp/minidlna_mediatype",sub_type);
									//ret = do_cmd(linebuffer);
									cgi_trace_line();
									//json_object_put(sub_item);	
								}
							}
							cgi_trace_line();
							cgi_dbg("the %d time: media_type_sub is:%s\n",i,media_type_sub);
							cgi_trace_line();
							memset(linebuffer, 0x00 ,sizeof(linebuffer));	
							sprintf(linebuffer,"%s,%s",media_type_sub,sharedfolder);
							cgi_dbg("the %d time:add the share path list the linebuffer  is:%s\n",i,linebuffer);
							ret = do_uci_add_list(DLNA_DIRS, linebuffer);
							cgi_trace_line();
							if(ret){
								cgi_dbg("the %d time,add the DLNA_DIRS failed",i);
								goto error;
							}
							cgi_trace_line();
							//json_object_put(item);
							//json_object_put(cli_obj);
							cgi_trace_line();
							sub_type = 3;/*set the default value*/
						}
					}
					//json_object_put(media_dirs);
				}
			}
		}		
	}else{
		ret = do_uci_set(DLNA_ENABLE,"0");
		dlna_shutdown_flag = 1;
		cgi_trace_line();
	}
	
	
	cgi_trace_line();
error:
	if (ret == 0){
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		}
		
		do_uci_commit("minidlna");
		cgi_trace_line();
		if(dlna_shutdown_flag){
			do_cmd("/etc/init.d/minidlna stop");
			cgi_trace_line();
		}else{
			do_cmd("/etc/init.d/minidlna restart");
			cgi_trace_line();
		}

		
	} else {
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		}
	}

	json_object_put(i_obj);

	cgi_trace_exit();


	
	return ret;

}
int getdiskinfo(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();
	int ret = -1;
	json_object *obj = NULL;
	json_object *array_diskinfo = NULL;
	json_object *disks[2] = { NULL }; //partitions[0] for sda;partitions[1] for sdb
	json_object *cli_diskinfo[128] = { NULL };//assume there are 50 dirs all most
	json_object *cli_diskinfo_sec[128] = { NULL};
	json_object *partitioninfo_a = NULL;
	json_object *partitioninfo_b = NULL;
	json_object *array_subdirs = NULL;
	char flow[2048] = {0};		
	char subdirs[100][128] = {{0}};
	int i = 0;
	int j = 0;
	int k = 0;
	int subdir_flag = 0;	
	char dest_dir[128] = {"/mnt"}; //the root dir that to be scaned
	char linebuffer[256] = {0};
	char first_disk[128][128] = {{0}};
	char second_disk[128][128] = {{0}};
	char disk_name[128][128] = {{0}};
	int  first_disk_flag = 0;
	int second_disk_flag = 0;


	/*judge if there is any disk if there is no disk existing,goto error*/

	
	obj = json_object_new_object();
	array_diskinfo=json_object_new_array();

		
	/*get the disk name and the sub_partition of the disks*/

	i = 0;
	j = 0;
	k = 0;
	memset(linebuffer,0x00,sizeof(linebuffer));
	sprintf(linebuffer,"devices.@automount[%d].name",i);
	while(!(ret = do_uci_get(linebuffer,disk_name[i]))){
		if( i == 0 ){/*the first time*/
			strcpy(first_disk[j],disk_name[0]);
			j++;
			
			memset(linebuffer,0x00,sizeof(linebuffer));
			sprintf(linebuffer,"devices.@automount[%d].label",i);
			do_uci_get(linebuffer,first_disk[j]);
			j++;
			first_disk_flag = 1;
		}else{
			/*the other time*/
			if(strcmp(disk_name[i],disk_name[i-1]) == 0){
				/*it means that the disk is the firest disk,then just add the label to the first_disk*/
				memset(linebuffer,0x00,sizeof(linebuffer));
				sprintf(linebuffer,"devices.@automount[%d].label",i);
				if(first_disk_flag){
					do_uci_get(linebuffer,first_disk[j]);
					cgi_dbg("the first_disk[%d] is:[%s]",j,first_disk[j]);
					j++;
				}else{
					do_uci_get(linebuffer,second_disk[k]);
					cgi_dbg("the second_disk[%d] is:[%s]",k,second_disk[k]);
					k++;	
				}		
				
			}else{
				first_disk_flag = 0;
				second_disk_flag = 1;
				strcpy(second_disk[k],disk_name[i]);
				cgi_dbg("the second_disk[%d] is:[%s]",k,second_disk[k]);
				k++;
				memset(linebuffer,0x00,sizeof(linebuffer));
				sprintf(linebuffer,"devices.@automount[%d].label",i);
				do_uci_get(linebuffer,second_disk[k]);
				cgi_dbg("the second_disk[%d] is:[%s]",k,second_disk[k]);
				k++;

			}
			
		}
		
		i++;
		memset(linebuffer,0x00,sizeof(linebuffer));
		sprintf(linebuffer,"devices.@automount[%d].name",i);
	}
	
	cgi_dbg("the first_disk name is[%s]\n",first_disk[0]);
	cgi_dbg("the first_disk first partition  is[%s]\n",first_disk[1]);

	cgi_trace_line();
	/*get the disk name*/
	/*if the code come here means the first disk is must existing*/
	disks[0]=json_object_new_object();
	json_object_object_add(disks[0], "DiskName", json_object_new_string(first_disk[0]));
	partitioninfo_a = json_object_new_array();
	if(second_disk_flag){
		disks[1]=json_object_new_object();
		json_object_object_add(disks[1], "DiskName", json_object_new_string(second_disk[0]));
		partitioninfo_b = json_object_new_array();
	}

	cgi_trace_line();
	/*orgernize all of the sub dirs to the disks which is to contain all the information of every disks */
	for(i=1;i<127;i++){
		cli_diskinfo[i]=json_object_new_object();
		if(first_disk[i][0] != 0){
			json_object_object_add(cli_diskinfo[i], "FirstFolderName", json_object_new_string(first_disk[i]));
			memset(linebuffer, 0x00 ,sizeof(linebuffer));
			sprintf(linebuffer,"%s/%s",dest_dir,first_disk[i]);//the dest path is /mnt/disklabel
			memset(subdirs,0x00,sizeof(subdirs));
			if(!getsubdir(linebuffer,0,subdirs)){//get all the sub-dirs of the givern partition
				array_subdirs=json_object_new_array();
			}
			else{
				continue;
			}
			for(j=0;j<128;j++){
				//cgi_trace_line();
				if(subdirs[j][0] != 0){
					//array_subdirs=json_object_new_array();
					json_object_array_add(array_subdirs, json_object_new_string(subdirs[j]));						
					subdir_flag = 1;
				}else{
					break;
				}
			}
			if(subdir_flag){
				cgi_trace_line();
				json_object_object_add(cli_diskinfo[i], "SecFloder",array_subdirs);
				//json_object_put(array_subdirs);
			}
			json_object_array_add(partitioninfo_a, cli_diskinfo[i]);	
			
		}else{
			break;
		}
	}
	
	if(second_disk_flag){
		for( i = 1;i < 127; i++){
			cli_diskinfo_sec[i -1]=json_object_new_object();
			if(second_disk[i][0] != 0){
				json_object_object_add(cli_diskinfo_sec[i -1], "FirstFolderName", json_object_new_string(second_disk[i]));
				memset(linebuffer, 0x00 ,sizeof(linebuffer));
				sprintf(linebuffer,"%s/%s",dest_dir,second_disk[i]);//the dest path is /mnt/disklabel
				memset(subdirs,0x00,sizeof(subdirs));
				if(!getsubdir(linebuffer,0,subdirs)){//get all the sub-dirs of the givern partition
					array_subdirs=json_object_new_array();
				}
				else{
					continue;
				}
				for(j=0;j<128;j++){
					//cgi_trace_line();
					if(subdirs[j][0] != 0){
						json_object_array_add(array_subdirs, json_object_new_string(subdirs[j]));						
						subdir_flag = 1;
					}else{
						break;
					}
				}
				if(subdir_flag){
					cgi_trace_line();
					json_object_object_add(cli_diskinfo_sec[i -1], "SecFloder",array_subdirs);
					//json_object_put(array_subdirs);
				}
				json_object_array_add(partitioninfo_b, cli_diskinfo_sec[i -1]);	
				
			}else{
				break;
			}
		}
	}

	cgi_trace_line();

	cgi_dbg("partitioninfo_a: %s\n",  json_object_to_json_string(partitioninfo_a));	
	json_object_object_add(disks[0],"PatitionInfo",partitioninfo_a);
	cgi_dbg("disks %s\n", json_object_to_json_string(disks[0]));
	json_object_array_add(array_diskinfo,disks[0]);
		

	if(second_disk_flag){
		cgi_trace_line();
		cgi_dbg("partitioninfo_b: %s\n",  json_object_to_json_string(partitioninfo_b));
		json_object_object_add(disks[1],"PatitionInfo",partitioninfo_b);
		json_object_array_add(array_diskinfo,disks[1]);
	}

	json_object_object_add(obj, "DiskInfo", array_diskinfo);
	
	cgi_trace_line();	
	
	cgi_dbg("At last the obj is: %s\n",  json_object_to_json_string(obj));
	
	strcpy(flow, json_object_to_json_string(obj));
	
	cgi_trace_line();	
	
	if (val == NULL) {
		fprintf(stdout, "%s", flow);
	} else {
		sprintf(val, "%s", flow);
	}
	
	json_object_put(obj);
	json_object_put(array_diskinfo);
	json_object_put(partitioninfo_a);
	json_object_put(partitioninfo_b);
	json_object_put(disks[0]);
	json_object_put(disks[1]);
	json_object_put(array_subdirs);
	for (i = 0;i<128;i++){
		json_object_put(cli_diskinfo[i]);
		json_object_put(cli_diskinfo_sec[i]);
	}	
	
	cgi_trace_exit();
	
	return ret;
}
int getsamba(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();
	int ret = -1;
	
	char tmparray[128] = {0};
	json_object *obj = NULL;
	char flow[2048] = {0};
	
	obj = json_object_new_object();

	ret = do_uci_get(SAMBA_ENABLE,tmparray);
	if(!ret){
		if(strcmp(tmparray,"0")==0){
			json_object_object_add(obj, "IsEnable", json_object_new_string("0"));
		}else{
			json_object_object_add(obj, "IsEnable", json_object_new_string("1"));
		}
	}

	ret  = do_uci_get(SAMBA_NAME,tmparray);
	if(!ret){
		json_object_object_add(obj, "DeviceName", json_object_new_string(tmparray));
	}

	ret =  do_uci_get(SAMBA_WORK_GROUP,tmparray);
	if(!ret){
		json_object_object_add(obj, "WorkGroup", json_object_new_string(tmparray));
	}

	strcpy(flow, json_object_to_json_string(obj));	

	if (val == NULL) {
		fprintf(stdout, "%s", flow);
	} else {
		sprintf(val, "%s", flow);
	}
	
	json_object_put(obj);

	cgi_trace_exit();

	return ret;

}
int enablesamba(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();	
	int ret = -1;
	json_object *i_obj = NULL;
	json_object *sub_obj = NULL;
	int samba_enable = 0;
	
	i_obj = json_tokener_parse(list);
	json_object_object_get_ex(i_obj, "IsEnable", &sub_obj);
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("Set samba server option failed\n");
		goto error;
	}
	samba_enable = json_object_get_int(sub_obj);
	if(samba_enable == 0){
		ret = do_uci_set(SAMBA_ENABLE, "0");
	}else{
		ret = do_uci_set(SAMBA_ENABLE, "1");	
	}
	
error:
	if (ret == 0){
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		}
		do_uci_commit("samba");
		do_cmd("/etc/init.d/samba  restart");	
	} else {
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		}
	}
	
	cgi_trace_exit();
	
	return ret;
	
}
int guestsambashare(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();	
	int ret = -1;
	json_object *i_obj = NULL;
	json_object *sub_obj = NULL;
	i_obj = json_tokener_parse(list);
	int allowguest = 0;
	char dest_path[128] = {0};
	char dest_path_tmp[128] = {0};
	
	int set_flag = 0;
	int i = 0;
	char dest_sec[1024] = {0};
	//char linebuffer[1024]= {0};
	char opt_value[128] = {0};
	char linebuffer[256] = {0};
	char sec_name[256] = {0};
	//char sec_tmp[256] = {0};
	
	json_object_object_get_ex(i_obj, "IsAllowGuest", &sub_obj);
	
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("Set samba guest share option failed\n");
		goto error;
	}
	allowguest = json_object_get_int(sub_obj);
	
	json_object_object_get_ex(i_obj, "Dir", &sub_obj);
	if(sub_obj){
		strcpy(dest_path_tmp,json_object_get_string(sub_obj));
	}
	sprintf(dest_path,"/mnt%s",dest_path_tmp);

	/*delete all of the shared path if the layer_count is 2*/
	dealwithpath(dest_path,"samba");
	
	cgi_dbg("the dest sharing path is %s\n",dest_path);
	
	for (i = 0;i < 30;i++){
		if(set_flag){
			break;
		}
		cgi_dbg("loop here!\n");
		memset(dest_sec, 0x00, sizeof(dest_sec));
		sprintf(dest_sec,"samba.@share[%d].path",i);
		ret = do_uci_get(dest_sec,opt_value);
		if(!ret){
			if(strcmp(opt_value,dest_path)==0){
				
				cgi_dbg("get the dest section !!!!!\n");
				
				if(allowguest == 0){
					//cgi_dbg("set the anon_auth to 0\n");
					cgi_dbg("in fact we should delete the destination shared folder.\n");
					memset(dest_sec, 0x00, sizeof(dest_sec));
					//sprintf(dest_sec,"samba.@share[%d].anon_auth",i);
					//ret = do_uci_set(dest_sec,"0");
					sprintf(dest_sec,"samba.@share[%d]",i);
					ret = do_uci_delete(dest_sec,NULL);
					if(!ret){
						set_flag = 1;
					}
				}else{/*allowguest =1*/
					memset(dest_sec, 0x00, sizeof(dest_sec));
					sprintf(dest_sec,"samba.@share[%d].anon_auth",i);
					ret = do_uci_set(dest_sec,"2");/*1 for read only;2 for read and write*/
					
					cgi_dbg("set the anon_auth to 2,allow the guests to write to the shared folder!\n");
					
					if(!ret){/*if set the dest sharing to allow guest to access,
					 		then delete all the ro_list and rw_lisg*/
						set_flag = 1;
						cgi_dbg("delete the exist user list !!!!!\n");
						/*delete all the ro_list and rw_list if they are existing*/
						memset(dest_sec, 0x00, sizeof(dest_sec));
						sprintf(dest_sec,"samba.@share[%d].ro_list",i);
						ret = do_uci_get(dest_sec,opt_value);
						if((!ret)&&(opt_value[0] != 0)){
							memset(dest_sec, 0x00, sizeof(dest_sec));
							sprintf(dest_sec,"samba.@share[%d].ro_list",i);
							//do_uci_delete(dest_sec,"ro_list");
							do_uci_delete(dest_sec,NULL);
						}
						memset(dest_sec, 0x00, sizeof(dest_sec));
						sprintf(dest_sec,"samba.@share[%d].rw_list",i);
						ret = do_uci_get(dest_sec,opt_value);
						if((!ret)&&(opt_value[0] != 0)){
							memset(dest_sec, 0x00, sizeof(dest_sec));
							sprintf(dest_sec,"samba.@share[%d].rw_list",i);
							//do_uci_delete(dest_sec,"rw_list");
							do_uci_delete(dest_sec,NULL);
						}
						ret = 0;//ignore the ro/rw_list delete result.
					}
				}
			}
		}

	}
	if(set_flag == 0){
		/*there is no any shared folder*/
		/*add the user to the plain passwd config file who's name is pwd*/

		ret = do_uci_add("samba","share",sec_name);
		//sprintf(sec_tmp,"proftpd.%s",sec_name);
		//ret = do_uci_rename(sec_tmp, user_name);
		
		memset(linebuffer, 0x00 ,sizeof(linebuffer));
		sprintf(linebuffer,"samba.%s.path",sec_name);
		ret = do_uci_set(linebuffer,dest_path);//set the path option

		memset(linebuffer, 0x00 ,sizeof(linebuffer));
		sprintf(linebuffer,"samba.%s.anon_auth",sec_name);
		if(allowguest == 0){
			ret = do_uci_set(linebuffer,"0");
			cgi_dbg("The parameter from the webgui is wrong!\n");
		}else{
			ret = do_uci_set(linebuffer,"2");/*1 for read only;2 for read and write*/	
		}
		
	}

	//cgi_dbg("commit the samba config \n");
	//do_uci_commit("samba");
	
	//do_cmd("/etc/init.d/samba restart");

error:
	if (ret == 0){
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		}
		do_uci_commit("samba");
		do_cmd("/etc/init.d/samba  restart");	
	} else {
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		}
	}
	
	cgi_trace_exit();
	
	return ret;
}
int setsamba(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();	
	int ret = -1;
	json_object *i_obj = NULL;
	json_object *sub_obj = NULL;

	//int samba_enable = 0;
	char netbios[128] = {0};
	char workgroup[128] = {0};
	

	i_obj = json_tokener_parse(list);
	json_object_object_get_ex(i_obj, "DeviceName", &sub_obj);
	
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("Set samba server option failed\n");
		goto error;
	}

#if 0
	samba_enable = json_object_get_int(sub_obj);
	if( samba_enable == 1 ){
		ret = do_uci_set(SAMBA_ENABLE,"1");
	}else{
		ret = do_uci_set(SAMBA_ENABLE,"0");
	}
#endif
	strcpy(netbios,json_object_get_string(sub_obj));
	ret = do_uci_set(SAMBA_NAME,netbios);
	json_object_put(sub_obj);
	
	json_object_object_get_ex(i_obj, "WorkGroup", &sub_obj);
	if(sub_obj){
		strcpy(workgroup,json_object_get_string(sub_obj));
		ret = do_uci_set(SAMBA_WORK_GROUP,workgroup);
		json_object_put(sub_obj);
	}	
	

error:
	if (ret == 0){
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		}
		do_uci_commit("samba");
		do_cmd("/etc/init.d/samba  restart");	
	} else {
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		}
	}
	
	cgi_trace_exit();

	return ret;
}
int getaccounts(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();	
	int ret = -1;
	json_object *obj = NULL;
	json_object *array = NULL;
	json_object *client[30] = {NULL};
	int i = 0;
	char dest_section[128] = {0};
	char iseditable[2] = {0};
	char user_name[32] = {0};
	//char linebuffer[1024] = {0};
	char flow[2048] = {0};
	
	obj = json_object_new_object();
	array=json_object_new_array();

	for(i = 0;i < 30;i++){
		client[i]= json_object_new_object();
		memset(dest_section, 0x00, sizeof(dest_section));
		sprintf(dest_section,"pwd.@userinfo[%d].name",i);
		ret = do_uci_get(dest_section,user_name);
		if((!ret) && (user_name[0] != 0)){
			json_object_object_add(client[i],"Name",json_object_new_string(user_name));
			memset(dest_section, 0x00, sizeof(dest_section));
			sprintf(dest_section,"pwd.@userinfo[%d].editable",i);
			ret = do_uci_get(dest_section,iseditable);
			if( (!ret)&&(iseditable[0] != 0) ){
				json_object_object_add(client[i],"IsEditable",json_object_new_string(iseditable));
			}
			json_object_array_add(array, client[i]);
		}
		
		//json_object_array_add(array, client[i]);
		
	}
	json_object_object_add(obj, "Accounts", array);

	strcpy(flow, json_object_to_json_string(obj));
	
	if (val == NULL) {
		fprintf(stdout, "%s", flow);
	} else {
		sprintf(val, "%s", flow);
	}

	json_object_put(obj);

	json_object_put(array);
	for ( i = 0; i < 30; i++) {
		json_object_put(client[i]);	
	}

	cgi_trace_exit();

	return ret;
}
int addaccount(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();	
	int ret = -1;
	json_object *i_obj = NULL;
	json_object *sub_obj = NULL;
	char user_name[64] = {0};
	char passwd[64] = {0};
	char linebuffer[256] = {0};
	char sec_name[256] = {0};
	char sec_tmp[256] = {0};
	
	i_obj = json_tokener_parse(list);
	json_object_object_get_ex(i_obj, "Name", &sub_obj);
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("add the account  failed\n");
		goto error;
	}
	
	strcpy(user_name,json_object_get_string(sub_obj));	
	json_object_put(sub_obj);
	
	json_object_object_get_ex(i_obj, "Pwd", &sub_obj);
	
	//passwd =  json_object_get_string(sub_obj);
	strcpy(passwd,json_object_get_string(sub_obj));
	/*add user to the system*/
	memset(linebuffer, 0x00 ,sizeof(linebuffer));	
	sprintf(linebuffer,"(echo %s;sleep 1;echo %s )|adduser %s",passwd,passwd,user_name);
	ret = do_cmd(linebuffer);/*adduser USER*/
	if(ret ==-1){
		goto error;
	}
#if 0	 
	/*this work is set to the samba.init*/
	memset(linebuffer, 0x00 ,sizeof(linebuffer));	
	sprintf(linebuffer,"(echo %s;sleep 1;echo %s)|smbpasswd -as %s",passwd,passwd,user_name);
	ret = do_cmd(linebuffer);/*smbpasswd -a USER*/

#endif

	/*add the user to the plain passwd config file who's name is pwd*/

	ret = do_uci_add("pwd","userinfo",sec_name);
	sprintf(sec_tmp,"pwd.%s",sec_name);
	ret = do_uci_rename(sec_tmp, user_name);
	
	memset(linebuffer, 0x00 ,sizeof(linebuffer));
	sprintf(linebuffer,"pwd.%s.name",user_name);
	ret = do_uci_set(linebuffer,user_name);

	memset(linebuffer, 0x00 ,sizeof(linebuffer));
	sprintf(linebuffer,"pwd.%s.passwd",user_name);
	ret = do_uci_set(linebuffer,passwd);
	
	memset(linebuffer, 0x00 ,sizeof(linebuffer));
	sprintf(linebuffer,"pwd.%s.editable",user_name);
	ret = do_uci_set(linebuffer,"1");


error:
	if (ret == 0){
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		}
		 do_uci_commit("pwd");
	} else {
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		}
	}
	
	return ret;
}
int updateaccount(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();	
	int ret = -1;
	json_object *i_obj = NULL;
	json_object *sub_obj = NULL;
	char oldname[128] = {0};
	char newname[128] = {0};
	char passwd[128] = {0};
	char sec_name[256] = {0};
	char sec_tmp[256] = {0};
	
	char linebuffer[1024] = {0};
	
	i_obj = json_tokener_parse(list);
	json_object_object_get_ex(i_obj, "OrgName", &sub_obj);
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("UpdateAccount  option failed\n");
		goto error;
	}
	strcpy(oldname,json_object_get_string(sub_obj));
	
	json_object_object_get_ex(i_obj, "NewName", &sub_obj);
	if(sub_obj){
		strcpy(newname,json_object_get_string(sub_obj));
	}
	json_object_object_get_ex(i_obj, "Pwd", &sub_obj);
	if(sub_obj){
		strcpy(passwd,json_object_get_string(sub_obj));
	}
	/*delete the old name*/
		/*delete the system name*/
		memset(linebuffer, 0x00 ,sizeof(linebuffer));	
		sprintf(linebuffer,"deluser %s ",oldname);
		ret = do_cmd(linebuffer);
		if(ret == -1){
			goto error;
		}
		/*delete the smbpasswd name*/
		memset(linebuffer, 0x00 ,sizeof(linebuffer));	
		sprintf(linebuffer,"smbpasswd -x %s ",oldname);
		ret = do_cmd(linebuffer);
		/*delete the pwd name*/
		memset(linebuffer, 0x00 ,sizeof(linebuffer));	
		sprintf(linebuffer,"pwd.%s",oldname);
		ret = do_uci_delete(linebuffer,NULL);
	
	/*create the new name*/
		/*add the newname to the system*/
		memset(linebuffer, 0x00 ,sizeof(linebuffer));	
		sprintf(linebuffer,"(echo %s;sleep 1;echo %s )|adduser %s",passwd,passwd,newname);
		ret = do_cmd(linebuffer);
		if(ret == -1){
			goto error;
		}
		
		/*this work is set to the samba.init*/
		memset(linebuffer, 0x00 ,sizeof(linebuffer));	
		sprintf(linebuffer,"(echo %s;sleep 1;echo %s)|smbpasswd -as %s",passwd,passwd,newname);
		ret = do_cmd(linebuffer);/*smbpasswd -a USER*/
		
		/*add the user to the plain passwd config file who's name is pwd*/
		ret = do_uci_add("pwd","userinfo",sec_name);
		sprintf(sec_tmp,"pwd.%s",sec_name);
		ret = do_uci_rename(sec_tmp, newname);
		
		memset(linebuffer, 0x00 ,sizeof(linebuffer));
		sprintf(linebuffer,"pwd.%s.name",newname);
		ret = do_uci_set(linebuffer,newname);

		memset(linebuffer, 0x00 ,sizeof(linebuffer));
		sprintf(linebuffer,"pwd.%s.passwd",newname);
		ret = do_uci_set(linebuffer,passwd);
		
		memset(linebuffer, 0x00 ,sizeof(linebuffer));
		sprintf(linebuffer,"pwd.%s.editable",newname);
		ret = do_uci_set(linebuffer,"1");
	

error:
	if (ret == 0){
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		}
		 do_uci_commit("pwd");
	} else {
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		}
	}

	cgi_trace_exit();

	return ret;
}

/* 
*    Function Name    : delstrfromstrs
*    Create Date        : 2015.07.16
*    Author                 : Nick Li
*    Description          : Delete the string from the strings
*    Param  Input     1 :string---the sub string that need to be deleted.
				2:strings ---the strings that need to be deal with.
*    Return Code  1    : void
*    revised History   :  
*/
static void delstrfromstrs(const char *string ,char *strings){
	char *p = NULL;
	char *tmp_strings = (char *)malloc(1024);
	int i  = 0;
	strcpy(tmp_strings,strings);
	while((p=strtok(tmp_strings,","))!=NULL){
		if(strcmp(p,string)!=0){
			if(i ==0){
				sprintf(strings,"%s",p);
			}else{
				sprintf(strings,"%s,%s",strings,p);
			}
		}	
		tmp_strings = NULL;
		i++;
	}
}


/* 
*    Function Name    : deluserfromeserv
*    Create Date        : 2015.07.16
*    Author                 : Nick Li
*    Description          : Delete the user name  from the dest services' backend config files.
*    Param  Input       :username---the destination user that need to be deleted .
*    Return Code  1    :void
*    revised History   :  
*/
static void deluserfromeserv(char *username,char *servicename){
	
	cgi_trace_enter();	
	int ret = -1;
	char cmdline[1024] = {0};
	char linebuffer[1024] = {0};
	int loop_sum = 0;
	FILE *fp_t;
	int i = 0;
	char anon_auth[16] = {0};
	char ro_list[1024] = {0};
	char rw_list[1024] = {0};
	char tmp_ro_list[1024] = {0};
	char tmp_rw_list[1024] = {0};
	char tmp_user[128] = {0};

	sprintf(tmp_user,",%s,",username);
	
	/*delete the user frome the ftp config*/
	//sprintf(cmdline,"cat /etc/config/proftpd |grep -rn \"config share\" -c");
	sprintf(cmdline,"cat /etc/config/%s |grep -rn \"config share\" -c",servicename);
	if((fp_t = popen(cmdline,"r"))!=NULL){
		if(fgets(linebuffer,16,fp_t) != NULL){
			cgi_dbg("result of the cmd is [%s]\n",linebuffer);
			loop_sum=atoi(linebuffer);
			cgi_dbg("there are [%d] shared folder in %s services\n",loop_sum,servicename);
		}
	}else{
		cgi_err("get date error");
		//return -1;
		loop_sum = 30;//because we asume that the sum of shared folders is limited to be 30.  
	}
	pclose(fp_t);
	
	memset(linebuffer,0x00,sizeof(linebuffer));
	for(i=0;i<loop_sum;i++){
		/*firstly check if the folder is allow guest to access*/
		cgi_dbg("the [%d] time\n",i);
		sprintf(linebuffer,"%s.@share[%d].anon_auth",servicename,i);
		ret = do_uci_get(linebuffer,anon_auth);
		if(!ret){
			if(strcmp(anon_auth,"0")==0){
				cgi_trace_line();
				cgi_dbg("delete the user from the ro_list or rw_list\n",i);
				/*delete the user from the ro_list or rw_list*/
				//get the ro_list if it is exists.
				memset(linebuffer,0x00,sizeof(linebuffer));
				memset(tmp_ro_list,0x00,sizeof(tmp_ro_list));
				memset(ro_list,0x00,sizeof(ro_list));
				
				sprintf(linebuffer,"%s.@share[%d].ro_list",servicename,i);
				ret = do_uci_get(linebuffer,ro_list);
				if(!ret){
					if(ro_list[0]!=0)
						sprintf(tmp_ro_list,",%s,",ro_list);
					cgi_trace_line();
					/*check if the user is in the ro_list ,if yes delete it */
					if(strcmp(tmp_user,tmp_ro_list)!=0){
						if(strstr(tmp_ro_list,tmp_user)){
							
							cgi_dbg("the username is [%s] is in the ro_list [%s]\n",username,ro_list);
							
							delstrfromstrs(username,ro_list);//delete the user from the ro_list.
							//delete the old ro_list at first
							memset(linebuffer, 0x00, sizeof(linebuffer));
							sprintf(linebuffer,"%s.@share[%d].ro_list",servicename,i);
							ret = do_uci_delete(linebuffer,NULL);
							//add the new rw_list
							memset(linebuffer, 0x00, sizeof(linebuffer));
							sprintf(linebuffer,"%s.@share[%d].ro_list",servicename,i);
							ret = do_uci_add_list(linebuffer,ro_list);		
						}
					}else{
						////the ro_list just contain the dest user,just delete the old ro_list
						memset(linebuffer, 0x00, sizeof(linebuffer));
						sprintf(linebuffer,"%s.@share[%d].ro_list",servicename,i);
						ret = do_uci_delete(linebuffer,NULL);
					}
				}
				//get the rw_list if it is exists.
				memset(linebuffer,0x00,sizeof(linebuffer));
				memset(tmp_rw_list,0x00,sizeof(tmp_rw_list));
				memset(rw_list,0x00,sizeof(rw_list));
				sprintf(linebuffer,"%s.@share[%d].rw_list",servicename,i);
				ret = do_uci_get(linebuffer,rw_list);
				if(!ret){
					if(rw_list[0]!=0)
						sprintf(tmp_rw_list,",%s,",rw_list);
					cgi_dbg("the [%d]time content of the rw_list is [%s]\n",i,rw_list);
					/*check if the user is in the rw_list ,if yes delete it */
					if(strcmp(tmp_user,tmp_rw_list)!=0){
						if(strstr(tmp_rw_list,tmp_user)){
							
							cgi_dbg("the [%d] time username is [%s] is in the rw_list [%s]\n",i,username,rw_list);
							delstrfromstrs(username,rw_list);//delete the user from the ro_list.then get the new rw_list.
							cgi_dbg("the [%d] time delete the user [%s] ,then the rw_list is [%s]\n",i,username,rw_list);
							
							//delete the old rw_list at first
							memset(linebuffer, 0x00, sizeof(linebuffer));
							sprintf(linebuffer,"%s.@share[%d].rw_list",servicename,i);
							ret = do_uci_delete(linebuffer,NULL);
							//add the new rw_list
							memset(linebuffer, 0x00, sizeof(linebuffer));
							sprintf(linebuffer,"%s.@share[%d].rw_list",servicename,i);
							ret = do_uci_add_list(linebuffer,rw_list);		
						}

					}else{
						//the rw_list just contain the dest user,just delete the old rw_list
						memset(linebuffer, 0x00, sizeof(linebuffer));
						sprintf(linebuffer,"%s.@share[%d].rw_list",servicename,i);
						ret = do_uci_delete(linebuffer,NULL);
					}
				}
				
			}else{
				continue;
			}
		}
	}
	memset(cmdline,0x00,sizeof(cmdline));
	sprintf(cmdline,"%s",servicename);
	ret = do_uci_commit(cmdline);
	if(!ret){
	/*restart the service*/
		memset(cmdline,0x00,sizeof(cmdline));
		sprintf(cmdline,"/etc/init.d/%s restart",servicename);
		do_cmd(cmdline);
	}

	/*should we delete the user frome the dlna config?*/
	

	cgi_trace_exit();

}
int delaccount(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();	
	int ret = -1;
	json_object *i_obj = NULL;
	json_object *sub_obj = NULL;
	char user_name[64] = {0};
	char linebuffer[256] = {0};
	
	i_obj = json_tokener_parse(list);
	json_object_object_get_ex(i_obj, "Name", &sub_obj);

	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("delete the account  failed\n");
		goto error;
	}

	strcpy(user_name,json_object_get_string(sub_obj));	

	/*add the user to the system*/
	memset(linebuffer, 0x00 ,sizeof(linebuffer));	
	sprintf(linebuffer,"deluser %s",user_name);
	ret = do_cmd(linebuffer);/*deluser USER*/
	if(ret == -1){
		goto error;
	}
	
	/*delete the user form the /etc/samba/smbpasswd*/	
	memset(linebuffer, 0x00 ,sizeof(linebuffer));	
	sprintf(linebuffer,"smbpasswd -sx %s",user_name);
	ret = do_cmd(linebuffer);/*smbpasswd -x USER*/
	deluserfromeserv(user_name,"samba");//now just delete it from the proftpd.conf .
	
	/*delete the user from all the service config file,such as ftp,samba,dlna*/
	deluserfromeserv(user_name,"proftpd");//now just delete it from the proftpd.conf .

	/*delete the user from the plain passwd backfile */
	memset(linebuffer, 0x00 ,sizeof(linebuffer));	
	sprintf(linebuffer,"pwd.%s",user_name);
	ret = do_uci_delete(linebuffer,NULL);
	cgi_dbg("the linbuffer is [%s]\n",linebuffer);
	cgi_dbg("the user name is :[%s]\n",user_name);
	
	
error:
	if (ret == 0){
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		}
		 do_uci_commit("pwd");
	} else {
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		}
	}
	
	cgi_trace_exit();
	
	return ret;
}
int getsambapermission(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();
	int ret = -1;

	json_object *i_obj = NULL;
	json_object *sub_obj = NULL;
	
	json_object *obj = NULL;
	json_object *array = NULL;
	json_object *userinfo[30] = { NULL }; //assume that there are 30 user at all
	char linebuffer[1024] = {0};
	//char dest_disk[128] = {0};
	char dest_part[128] = {0};
	char dest_dir[128] = {0};
	char dest_section[128] = {0};
	char opt_value[1024] = {0}; 
	char tmp_opt_value[128] = {0};
	char flow[2048] = {0};

	int i = 0;
	int j = 0;
	int guest_flag = 0;

	char ro_list[2048] = {0};
	char rw_list[2048] = {0};

	obj = json_object_new_object();
	array=json_object_new_array();
	
	i_obj = json_tokener_parse(list);
	json_object_object_get_ex(i_obj, "DiskName", &sub_obj);
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("Get samba permission option  wrong\n");
		return (-1);
	}
	//strcpy(dest_disk,json_object_get_string(sub_obj));
	json_object_object_get_ex(i_obj, "PartitionName", &sub_obj);
	if(sub_obj){
		strcpy(dest_part,json_object_get_string(sub_obj));
	}
	json_object_object_get_ex(i_obj, "FolderName", &sub_obj);
	if(sub_obj){
		strcpy(dest_dir,json_object_get_string(sub_obj));
	}
	
	if(dest_dir[0] == 0){
		sprintf(linebuffer,"/mnt/%s",dest_part);/*organize the path of the dest folder*/
	}else{
		sprintf(linebuffer,"/mnt/%s/%s",dest_part,dest_dir);/*organize the path of the dest folder*/
	}
	
	
	for(j = 0;j < 30; j ++){
		cgi_trace_line();
		memset(dest_section, 0x00, sizeof(dest_section));
		sprintf(dest_section,"samba.@share[%d].path",j);
		ret = do_uci_get(dest_section,opt_value);
		if(!ret){
			cgi_trace_line();
			if(strcmp(linebuffer,opt_value) == 0){
				memset(dest_section, 0x00, sizeof(dest_section));
				sprintf(dest_section,"samba.@share[%d].anon_auth",j);
				ret = do_uci_get(dest_section,opt_value);
				if(!ret){
					if(strcmp(opt_value,"2")==0){/*why here is '2'?because we set the guest's 
												permit to Read and write,1:readonly 2:read and write*/
						guest_flag = 1;							
					}else{							
						guest_flag = 0;
						memset(dest_section, 0x00, sizeof(dest_section));
						sprintf(dest_section,"samba.@share[%d].ro_list",j);
						ret = do_uci_get(dest_section,ro_list);
						memset(dest_section, 0x00, sizeof(dest_section));
						sprintf(dest_section,"samba.@share[%d].rw_list",j);
						ret = do_uci_get(dest_section,rw_list);
						cgi_trace_line();	
					}
				}
			}
		}
	}

	cgi_dbg("ro_list:%s\n",ro_list);
	cgi_dbg("rw_list:%s\n",rw_list);
	
	if(ro_list[0] != 0)//fix the bug-1250
		sprintf(ro_list,"%s,",ro_list);
	if(rw_list[0] !=0)//fix the bug-1250
		sprintf(rw_list,"%s,",rw_list);
	
	if(guest_flag){
		json_object_object_add(obj, "IsAllowGuest", json_object_new_string("1"));
	}else{
		json_object_object_add(obj, "IsAllowGuest", json_object_new_string("0"));
		/*deal with all the users*/
		for(i=0;i<30;i++){
			memset(dest_section, 0x00, sizeof(dest_section));
			sprintf(dest_section,"pwd.@userinfo[%d].name",i);
			ret = do_uci_get(dest_section,opt_value);//get the user_name to the opt_value
			if(!ret){
				sprintf(tmp_opt_value,"%s,",opt_value);//fix the bug-1250
				userinfo[i]= json_object_new_object();
				memset(dest_section, 0x00, sizeof(dest_section));
				sprintf(dest_section,"pwd.@userinfo[%d].editable",i);
				do_uci_get(dest_section,linebuffer);
				if((ro_list[0]!=0) && (strstr(ro_list,tmp_opt_value))){/*1*/
					json_object_object_add(userinfo[i],"Name",json_object_new_string(opt_value));
					json_object_object_add(userinfo[i],"IsEditable",json_object_new_string(linebuffer));
					json_object_object_add(userinfo[i],"Permit",json_object_new_string("1"));
				}else if((rw_list[0] != 0) && (strstr(rw_list,tmp_opt_value))){/*2*/
					json_object_object_add(userinfo[i],"Name",json_object_new_string(opt_value));
					json_object_object_add(userinfo[i],"IsEditable",json_object_new_string(linebuffer));
					json_object_object_add(userinfo[i],"Permit",json_object_new_string("2"));
				}else{/*0*/
					json_object_object_add(userinfo[i],"Name",json_object_new_string(opt_value));
					json_object_object_add(userinfo[i],"IsEditable",json_object_new_string(linebuffer));
					json_object_object_add(userinfo[i],"Permit",json_object_new_string("0"));
				}
				json_object_array_add(array, userinfo[i]);
			}
			
		}
		
	}
	
	json_object_object_add(obj, "Accounts", array);
	strcpy(flow, json_object_to_json_string(obj));
	
	if (val == NULL) {
		fprintf(stdout, "%s", flow);
	} else {
		sprintf(val, "%s", flow);
	}
	
	json_object_put(obj);
	json_object_put(array);
	for(i = 0;i<30;i++){
		json_object_put(userinfo[i]);
	}


	cgi_trace_exit();
	
	return ret;
}
int setsambapermission(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();
	int ret = -1;

	json_object *i_obj = NULL;
	json_object *sub_obj = NULL;	
	json_object *cli_obj_name = NULL;
	json_object *cli_obj_permit = NULL;
	json_object *accountinfo = NULL;
	json_object *item = NULL;	
	char linebuffer[1024] = {0};
	//char dest_disk[128] = {0};
	char dest_part[128] = {0};
	char dest_dir[128] = {0};
	char dest_section[128] = {0};
	char opt_value[1024] = {0}; 
	int i = 0;
	char ro_list[1024] = {0};
	char rw_list[1024] = {0};
	char *p = NULL;
	char *q = NULL;
	char sec_name[256] = {0};
	char sec_tmp[256] = {0};
	char allowgest[2] = {0};
	//int allowgest = 0;
	int add_share_flag = 0;
	int no_share_flag = 0;
	int user_count = 0;
	
	i_obj = json_tokener_parse(list);
	json_object_object_get_ex(i_obj, "DiskName", &sub_obj);
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("Set samba permission option  wrong\n");
		goto error;
	}
	json_object_object_get_ex(i_obj, "PartitionName", &sub_obj);
	if(sub_obj){
		strcpy(dest_part,json_object_get_string(sub_obj));
	}
	json_object_object_get_ex(i_obj, "FolderName", &sub_obj);
	if(sub_obj){
		strcpy(dest_dir,json_object_get_string(sub_obj));
	}


	json_object_object_get_ex(i_obj, "IsAllowGuest", &sub_obj);
	if(sub_obj){
		strcpy(allowgest,json_object_get_string(sub_obj));
	}
	else{
		strcpy(allowgest,"0");//set a default value
	}
	
	json_object_object_get_ex(i_obj, "Accounts", &accountinfo);

	if( dest_dir[0] == 0 ){
		sprintf(linebuffer,"/mnt/%s",dest_part);/*organize the path of the dest folder*/
	}else{
		sprintf(linebuffer,"/mnt/%s/%s",dest_part,dest_dir);/*organize the path of the dest folder*/
	}
	cgi_dbg("the path org is %s\n",linebuffer);
	
	/*get the ro_list and the rw_list*/
	json_object_object_get_ex(i_obj, "Accounts", &accountinfo);
	
	cgi_dbg("the accounts:[%s]\n",json_object_to_json_string(accountinfo));
	
	if(accountinfo){
		p = ro_list;
		q = rw_list;
		cgi_trace_line();
		if(json_type_array == json_object_get_type(accountinfo)){
			cgi_trace_line();
			for(i=0; i < json_object_array_length(accountinfo); i++){
				cgi_trace_line();
				item = json_object_array_get_idx(accountinfo, i);
				json_object_object_get_ex(item, "Permit", &cli_obj_permit);
				json_object_object_get_ex(item, "Name", &cli_obj_name);
				if(json_object_get_int(cli_obj_permit) == 1){
					if(ro_list[0] == 0){
						p += sprintf(p,"%s",json_object_get_string(cli_obj_name));
						cgi_trace_line();
						cgi_dbg("the user name[%d] :[%s]\n",i,json_object_get_string(cli_obj_name));
					}else{
						p += sprintf(p,",%s",json_object_get_string(cli_obj_name));
						cgi_trace_line();
						cgi_dbg("the user name[%d] :[%s]\n",i,json_object_get_string(cli_obj_name));
					}
					user_count ++;
				}else if(json_object_get_int(cli_obj_permit) == 2){
					if(rw_list[0] == 0){
						q += sprintf(q,"%s",json_object_get_string(cli_obj_name));
						cgi_trace_line();
						cgi_dbg("the user name[%d] :[%s]\n",i,json_object_get_string(cli_obj_name));
					}else{
						q += sprintf(q,",%s",json_object_get_string(cli_obj_name));
						cgi_trace_line();
						cgi_dbg("the user name[%d] :[%s]\n",i,json_object_get_string(cli_obj_name));
					}
					user_count ++;
				}else {
					continue;
				}	
				json_object_put(cli_obj_name);
				json_object_put(cli_obj_permit);
			}
		}				
	}
	p = NULL;
	q = NULL;
	cgi_dbg("ro_list:%s\n",ro_list);
	cgi_dbg("rw_list:%s\n",rw_list);

	/*deal with the shared path*/
	ret = dealwithpath(linebuffer,"samba");
	if(ret == -1){
		cgi_dbg("the dealwithpath return -1\n");
		goto error;
	}else if(ret == 1){/*add the partition to be shared*/
		cgi_dbg("the dealwithpath return 1\n");
		ret = do_uci_add("samba","share",sec_name);//add the share section

		memset(sec_tmp, 0x00, sizeof(sec_tmp));
		sprintf(sec_tmp,"samba.%s.path",sec_name);
		ret = do_uci_set(sec_tmp,linebuffer);//set the option path
		
		memset(sec_tmp, 0x00, sizeof(sec_tmp));
		sprintf(sec_tmp,"samba.%s.anon_auth",sec_name);				
		ret  = do_uci_set(sec_tmp,allowgest);//set the option anon_auth 
		
		if(ro_list[0] !=0){
			memset(sec_tmp, 0x00, sizeof(sec_tmp));
			sprintf(sec_tmp,"samba.%s.ro_list",sec_name);
			ret = do_uci_set(sec_tmp, ro_list);//set the ro_list
		}
		if(rw_list[0] != 0){
			memset(sec_tmp, 0x00, sizeof(sec_tmp));
			sprintf(sec_tmp,"samba.%s.rw_list",sec_name);
			ret = do_uci_set(sec_tmp, rw_list);//set the rw_list
		}
		add_share_flag=1;
		ret = 0;
		goto error;
	}else{/*the layer_count=3*/
		
		cgi_dbg("The dest path is the sub folder of a partition!\n");
	}


	/*set the ro_list and the rw_list to the dest shared folder*/	
	for(i = 0;i < 30; i++){
		if(add_share_flag){
			break;
		}
		memset(dest_section, 0x00, sizeof(dest_section));
		sprintf(dest_section,"samba.@share[%d].path",i);
		memset(opt_value, 0x00, sizeof(opt_value));
		ret = do_uci_get(dest_section,opt_value);
		if((!ret) ){/*if there are some share section*/
			cgi_dbg("there are some share section\n");
			if(opt_value[0] != 0){/*if there are same shared folders*/
				cgi_dbg("the opv_value is %s\n",opt_value);
				if( strcmp(linebuffer,opt_value)==0){/*if the dest shared folder is existing*/
					cgi_dbg("modify the exist sharing\n");
					if(user_count){
						/*set the anon_auth option*/
						memset(dest_section, 0x00, sizeof(dest_section));
						sprintf(dest_section,"samba.@share[%d].anon_auth",i);
						ret = do_uci_set(dest_section,allowgest);
						
						/*delete all the old user list*/
						memset(dest_section, 0x00, sizeof(dest_section));
						sprintf(dest_section,"samba.@share[%d].ro_list",i);
						ret = do_uci_delete(dest_section,NULL);
						memset(dest_section, 0x00, sizeof(dest_section));
						sprintf(dest_section,"samba.@share[%d].rw_list",i);
						ret = do_uci_delete(dest_section,NULL);
						
						if(ro_list[0]!= 0){	
							memset(dest_section, 0x00, sizeof(dest_section));
							sprintf(dest_section,"samba.@share[%d].ro_list",i);
							ret = do_uci_add_list(dest_section,ro_list);
						}
						if(rw_list[0] != 0){
							memset(dest_section, 0x00, sizeof(dest_section));
							sprintf(dest_section,"samba.@share[%d].rw_list",i);
							ret = do_uci_add_list(dest_section,rw_list);					
						}
					}
					else{/*if the manager set all the user's permit to NO,then delete the shared folder.*/
						memset(dest_section, 0x00, sizeof(dest_section));
						sprintf(dest_section,"samba.@share[%d]",i);
						ret = do_uci_delete(dest_section,NULL);		
					}
					no_share_flag = 0;
					break;
				}
			}
		}else{/*if just there is  no any shared section*/

				cgi_trace_line();
				cgi_dbg("there are no any sharing already,so this time to add a new sharing\n");
					
				ret = do_uci_add("samba","share",sec_name);//add the share section

				memset(sec_tmp, 0x00, sizeof(sec_tmp));
				sprintf(sec_tmp,"samba.%s.path",sec_name);
				ret = do_uci_set(sec_tmp,linebuffer);//set the option path
				
				memset(sec_tmp, 0x00, sizeof(sec_tmp));
				sprintf(sec_tmp,"samba.%s.anon_auth",sec_name);				
				ret  = do_uci_set(sec_tmp,allowgest);//set the option anon_auth 
				
				if(ro_list[0] !=0){
					memset(sec_tmp, 0x00, sizeof(sec_tmp));
					sprintf(sec_tmp,"samba.%s.ro_list",sec_name);
					ret = do_uci_set(sec_tmp, ro_list);//set the ro_list
				}
				if(rw_list[0] != 0){
					memset(sec_tmp, 0x00, sizeof(sec_tmp));
					sprintf(sec_tmp,"samba.%s.rw_list",sec_name);
					ret = do_uci_set(sec_tmp, rw_list);//set the rw_list
				}
				add_share_flag=1;
				no_share_flag = 0;
				break;
			}
			cgi_trace_line();
			no_share_flag = 1;//there is no any shared section.
	}
#if 0
	if(no_share_flag){//there is no any shared section before.
	/*the dest share folder has not been existiong*/

		cgi_trace_line();
		cgi_dbg("there are some sharing already,but this time to add a new sharing\n");
		
		ret = do_uci_add("samba","share",sec_name);//add the share section and get the code to sec_name

		memset(sec_tmp, 0x00, sizeof(sec_tmp));
		sprintf(sec_tmp,"samba.%s.path",sec_name);
		ret = do_uci_set(sec_tmp,linebuffer);//set the option path
		
		cgi_dbg("add the dest shared path%s\n",linebuffer);
		
		memset(sec_tmp, 0x00, sizeof(sec_tmp));
		sprintf(sec_tmp,"samba.%s.anon_auth",sec_name);				
		ret  = do_uci_set(sec_tmp,allowgest);//set the option anon_auth 
		
		if(ro_list[0] !=0){
			memset(sec_tmp, 0x00, sizeof(sec_tmp));
			sprintf(sec_tmp,"samba.%s.ro_list",sec_name);
			ret = do_uci_set(sec_tmp, ro_list);//set the ro_list
		}
		if(rw_list[0] != 0){
			memset(sec_tmp, 0x00, sizeof(sec_tmp));
			sprintf(sec_tmp,"samba.%s.rw_list",sec_name);
			ret = do_uci_set(sec_tmp, rw_list);//set the rw_list
		}
					
	}
#endif

	
error:
	if (ret == 0){
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		}
		do_uci_commit("samba");
		do_cmd("/etc/init.d/samba  restart");	
	} else {
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		}
	}
	
	cgi_trace_exit();
	
	return ret;
}
int addfolder(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();	
	int ret = -1;
	json_object *i_obj = NULL;
	json_object *sub_obj = NULL;
	char diskname[128] = {0};
	char partname[128] = {0};
	char dirname[128] = {0};
	char linebuffer[1024] = {0};
	
	i_obj = json_tokener_parse(list);
	json_object_object_get_ex(i_obj, "DiskName", &sub_obj);
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("Add folder option failed\n");
		goto error;
	}
	strcpy(diskname,json_object_get_string(sub_obj));
	
	json_object_object_get_ex(i_obj, "PartitionName", &sub_obj);
	if(sub_obj){
		strcpy(partname,json_object_get_string(sub_obj));
	}
	json_object_object_get_ex(i_obj, "FolderName", &sub_obj);
	if(sub_obj){
		strcpy(dirname,json_object_get_string(sub_obj));
	}
	memset(linebuffer, 0x00 ,sizeof(linebuffer));
	sprintf(linebuffer,"/mnt/%s/%s",partname,dirname);	
	ret = mkdir(linebuffer,0777);//make the dest dir
	chmod(linebuffer,0777);
	
error:
	if (ret == 0){
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		}
	
	} else {
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		}
	}
	
	cgi_trace_exit();
	
	return ret;
}
int updatefolder(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();	
	int ret = -1;
	json_object *i_obj = NULL;
	json_object *sub_obj = NULL;
	char diskname[128] = {0};
	char partname[128] = {0};
	char olddirname[128] = {0};
	char newdirname[128] = {0};
	
	char linebuffer_old[1024] = {0};
	char linebuffer_new[1024] = {0};
	char linebuffer[1024] = {0};
	if(getuid())
	{
		/*you can't modify the dest dir without root permission!*/
		cgi_dbg(" you are not root account \n");
	}else{
		cgi_dbg("you are  root account \n");
	}
	
	
	i_obj = json_tokener_parse(list);
	json_object_object_get_ex(i_obj, "DiskName", &sub_obj);
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("Add folder option failed\n");
		goto error;
	}
	strcpy(diskname,json_object_get_string(sub_obj));
	
	json_object_object_get_ex(i_obj, "PartitionName", &sub_obj);
	if(sub_obj){
		strcpy(partname,json_object_get_string(sub_obj));
	}
	json_object_object_get_ex(i_obj, "FolderName", &sub_obj);
	if(sub_obj){
		strcpy(olddirname,json_object_get_string(sub_obj));
	}
	json_object_object_get_ex(i_obj, "NewFolderName", &sub_obj);
	if(sub_obj){
		strcpy(newdirname,json_object_get_string(sub_obj));
	}

	memset(linebuffer_old, 0x00 ,sizeof(linebuffer_old));
	sprintf(linebuffer_old,"/mnt/%s/%s",partname,olddirname);
	memset(linebuffer_new, 0x00 ,sizeof(linebuffer_new));
	sprintf(linebuffer_new,"/mnt/%s/%s",partname,newdirname);
	ret = rename(linebuffer_old,linebuffer_new);//rename the dest dir
	
	/*rename the destination folder in the samba config file and the ftp config file*/

	memset(linebuffer, 0x00 ,sizeof(linebuffer_old));
	sprintf(linebuffer,"sed -i 's/\\/mnt\\/%s\\/%s/\\/mnt\\/%s\\/%s/g\' /etc/config/samba",
		partname,olddirname,partname,newdirname);	
	ret = do_cmd(linebuffer);
	
	memset(linebuffer, 0x00 ,sizeof(linebuffer_old));
	sprintf(linebuffer,"sed -i 's/\\/mnt\\/%s\\/%s/\\/mnt\\/%s\\/%s/g\' /etc/config/proftpd",
		partname,olddirname,partname,newdirname);
	ret = do_cmd(linebuffer);
	
error:
	if (ret == 0){
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		}
		do_cmd("/etc/init.d/samba restart");
		do_cmd("/etc/init.d/proftpd restart");
	} else {
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		}
	}
	
	cgi_trace_exit();
	
	return ret;
}
int delfolder(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();	
	int ret = -1;
	json_object *i_obj = NULL;
	json_object *sub_obj = NULL;
	char diskname[128] = {0};
	char partname[128] = {0};
	char dirname[128] = {0};
	char linebuffer[1024] = {0};
	
	i_obj = json_tokener_parse(list);
	json_object_object_get_ex(i_obj, "DiskName", &sub_obj);
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("Add folder option failed\n");
		goto error;
	}
	strcpy(diskname,json_object_get_string(sub_obj));
	
	json_object_object_get_ex(i_obj, "PartitionName", &sub_obj);
	if(sub_obj){
		strcpy(partname,json_object_get_string(sub_obj));
	}
	json_object_object_get_ex(i_obj, "FolderName", &sub_obj);
	if(sub_obj){
		strcpy(dirname,json_object_get_string(sub_obj));
	}
	memset(linebuffer, 0x00 ,sizeof(linebuffer));
	//sprintf(linebuffer,"/mnt/%s/%s",partname,dirname);
	sprintf(linebuffer,"rm -rf /mnt/%s/%s",partname,dirname);
	
	//ret = rmdir(linebuffer);//delete the dest dir
	ret = system(linebuffer);//delete the dest dir
	
error:
	if (ret == 0){
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		}
		
	} else {
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		}
	}
	
	cgi_trace_exit();
	return ret;
}

/*following code for ftp*/
int getftp(tcm_session *session, char *name, char *val, char *list)
{

	cgi_trace_enter();	
	int ret = -1;
	json_object *obj = NULL;
	char tmparray[64] = {0};
	char flow[2048] = {0};
	
	obj = json_object_new_object();
	
	memset(tmparray, 0x00, sizeof(tmparray));	
	ret = do_uci_get(FTP_ENABLE,tmparray);
	if(ret ==0){
		json_object_object_add(obj, "IsEnable", json_object_new_string(tmparray));		
		cgi_dbg("the IsEnable is %s\n",json_object_new_string(tmparray));
	}else{
		goto error;
	}
//#if 0	
	memset(tmparray, 0x00, sizeof(tmparray));
	ret = do_uci_get(FTP_MAX_CONNECT,tmparray);
	if(ret == 0){
		json_object_object_add(obj, "MaxNum", json_object_new_string(tmparray));	
		cgi_dbg("the MaxNum is %s\n",json_object_new_string(tmparray));
	}else{
		goto error;
	}
//#endif
	memset(tmparray, 0x00, sizeof(tmparray));
	ret = do_uci_get(FTP_OUT_ACCESS_ENABLE,tmparray);
	if(ret == 0){
		json_object_object_add(obj, "IsOutAccessEnable", json_object_new_string(tmparray));	
		cgi_dbg("the IsOutAccessEnable is %s\n",json_object_new_string(tmparray));
	}else{
		goto error;
	}
	
	memset(tmparray, 0x00, sizeof(tmparray));
	ret = do_uci_get(FTP_OUT_ACCESS_PORT,tmparray);
	if(ret == 0){
		/*the outaccessport default is 8021 */
		json_object_object_add(obj, "OutAccessPort", json_object_new_string(tmparray));	
		cgi_dbg("the OutAccessPort is %s\n",json_object_new_string(tmparray));
	}else{
		goto error;
	}

#if 0
	json_object_object_add(obj, "Charset", json_object_new_int(2));	
#endif

	strcpy(flow, json_object_to_json_string(obj));
	
	json_object_put(obj);
	
	
error:
	if (ret == 0){
		if (val == NULL) {
			fprintf(stdout, "%s", flow);
		} else {
			sprintf(val, "%s", flow);
		}
		/*local operation code*/
	} else {
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		}
	}
		
	cgi_trace_exit();
	
	return ret;
}
int enableftp(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();	
	int ret = -1;

	json_object *i_obj = NULL;
	json_object *sub_obj = NULL;
	int ftp_enable = 0;
	
	i_obj = json_tokener_parse(list);
	json_object_object_get_ex(i_obj, "IsEnable", &sub_obj);
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("Set ftp server option failed\n");
		goto error;
	}
	ftp_enable = json_object_get_int(sub_obj);
	if(ftp_enable == 0){
		ret = do_uci_set(FTP_ENABLE,"0");
	}else{
		ret = do_uci_set(FTP_ENABLE,"1");
	}
	
error:
	if (ret == 0){
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		}
		/*local operation code*/
		do_uci_commit("proftpd");
		do_cmd("/etc/init.d/proftpd restart");
	} else {
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		}
	}	
	
	cgi_trace_exit();
	
	return ret;
}
int setftp(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();	
	int ret = -1;

	json_object *i_obj = NULL;
	json_object *sub_obj = NULL;
	int out_acc_enable = 0;
	char out_acc_port[32] = {0};
	char local_ip[16] = {0};
	char linebuffer[1024] = {0};
	char sec_name[256] = {0};
	
	i_obj = json_tokener_parse(list);

	json_object_object_get_ex(i_obj, "MaxNum", &sub_obj);
	if(sub_obj){
		cgi_dbg("the MaxNum is %d\n",json_object_get_int(sub_obj));
		memset(linebuffer,0x00,sizeof(linebuffer));
		sprintf(linebuffer,"%d",json_object_get_int(sub_obj));
		cgi_dbg("Now the linebuffer is %s\n",linebuffer);
		ret = do_uci_set(FTP_MAX_CONNECT,linebuffer);
		if(ret){
			cgi_dbg("set the MaxInstances failed\n ");
			goto error;
		}
		cgi_dbg("set the MaxInstances successfully\n ");
	}
	
	json_object_object_get_ex(i_obj, "IsOutAccessEnable", &sub_obj);
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("Set ftp server out access option failed\n");
		goto error;
	}
	out_acc_enable = json_object_get_int(sub_obj);
	if(out_acc_enable == 0){
		ret = do_uci_set(FTP_OUT_ACCESS_ENABLE,"0");
		if(ret){
			goto error;
		}
	}else{
		ret = do_uci_set(FTP_OUT_ACCESS_ENABLE,"1");
		if(ret){
			goto error;
		}
		json_object_object_get_ex(i_obj, "OutAccessPort", &sub_obj);
		if(sub_obj){
			strcpy(out_acc_port,json_object_get_string(sub_obj));
			ret = do_uci_set(FTP_OUT_ACCESS_PORT,out_acc_port);
			if(ret){
				goto error;
			}
		}
	}
	
	ret = do_uci_get(NET_LAN_IPADDR,local_ip);
	if(ret){
		goto error;
	}
	/*write the firewall config file*/

	ret = do_uci_get(FTP_OUT_ACCESS,linebuffer);/*find the dest config section*/
	if(!ret){/*there is a redirect section*/
		/*set the redirect port*/
		ret = do_uci_set(FTP_OUT_PORT,out_acc_port);
		if(ret){
			goto error;
		}
		ret = do_uci_set(FTP_OUT_DEST_IP,local_ip);
		if(ret){
			goto error;
		}
		ret = do_uci_set(FTP_OUT_DEST_ENABLED,out_acc_enable?"1":"0");
		if(ret){
			goto error;
		}
		
	}else{/*there is no redirect section*/
		/*create a new redirect section*/
		ret = do_uci_add("firewall","redirect",sec_name);
		memset(linebuffer,0x00,sizeof(linebuffer));
		sprintf(linebuffer,"firewall.%s",sec_name);
		ret = do_uci_rename(linebuffer, "ftp_out_access");
		if(ret){
			goto error;
		}
		ret = do_uci_set(FTP_OUT_SRC,"wan");
		if(ret){
			goto error;
		}
		ret = do_uci_set(FTP_OUT_PORT,out_acc_port);
		if(ret){
			goto error;
		}
		ret = do_uci_set(FTP_OUT_PROTO,"tcp");
		if(ret){
			goto error;
		}
		ret = do_uci_set(FTP_OUT_DEST_IP,local_ip);
		if(ret){
			goto error;
		}
		ret = do_uci_set(FTP_OUT_DEST_PORT,"21");
		if(ret){
			goto error;
		}
		ret = do_uci_set(FTP_OUT_DEST_ENABLED,out_acc_enable?"1":"0");
		if(ret){
			goto error;
		}
				
	}	

	
error:
	if (ret == 0){
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		}
		/*local operation code*/
		do_uci_commit("proftpd");
		do_uci_commit("firewall");
		do_cmd("/etc/init.d/firewall reload");
		do_cmd("/etc/init.d/proftpd restart");
	} else {
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		}
	}	
	
	cgi_trace_exit();
	
	return ret;

}
int getftppermission(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();	
	
	int ret = -1;
	json_object *i_obj = NULL;
	json_object *sub_obj = NULL;
	
	json_object *obj = NULL;
	json_object *array = NULL;
	json_object *userinfo[30] = { NULL }; //assume that there are 30 user at all
	char linebuffer[1024] = {0};
	//char dest_disk[128] = {0};
	char dest_part[128] = {0};
	char dest_dir[128] = {0};
	char dest_section[128] = {0};
	char opt_value[1024] = {0}; 
	char tmp_opt_value[128] = {0};
	char flow[2048] = {0};

	int i = 0;
	int j = 0;
	int guest_flag = 0;
	char ro_list[2048] = {0};
	char rw_list[2048] = {0};
	char tmp_ro_list[2048] = {0};
	char tmp_rw_list[2048] = {0};

	obj = json_object_new_object();
	array=json_object_new_array();
	
	i_obj = json_tokener_parse(list);
	json_object_object_get_ex(i_obj, "DiskName", &sub_obj);
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("Get ftp permission option  wrong!\n");
		return(-1);
	}
	
	cgi_dbg("the disk name is%s\n",json_object_get_string(sub_obj));
	
	json_object_object_get_ex(i_obj, "PartitionName", &sub_obj);
	if(sub_obj){
		strcpy(dest_part,json_object_get_string(sub_obj));
	}
	json_object_object_get_ex(i_obj, "FolderName", &sub_obj);
	if(sub_obj){
		strcpy(dest_dir,json_object_get_string(sub_obj));
	}
	sprintf(linebuffer,"/mnt/%s/%s",dest_part,dest_dir);/*organize the path of the dest folder*/
	cgi_trace_line();
	for(j = 0;j < 30; j ++){
		cgi_trace_line();
		memset(dest_section, 0x00, sizeof(dest_section));
		sprintf(dest_section,"proftpd.@share[%d].path",j);
		memset(opt_value,0x00,sizeof(opt_value));
		ret = do_uci_get(dest_section,opt_value);
		if(!ret){
			cgi_trace_line();
			if(strcmp(linebuffer,opt_value) == 0){
				memset(dest_section, 0x00, sizeof(dest_section));
				sprintf(dest_section,"proftpd.@share[%d].anon_auth",j);
				memset(opt_value,0x00,sizeof(opt_value));
				ret = do_uci_get(dest_section,opt_value);
				if(!ret){
					if(strcmp(opt_value,"2")==0){
						guest_flag = 1;							
					}else{							
						guest_flag = 0;
						memset(dest_section, 0x00, sizeof(dest_section));
						sprintf(dest_section,"proftpd.@share[%d].ro_list",j);
						ret = do_uci_get(dest_section,tmp_ro_list);
						memset(dest_section, 0x00, sizeof(dest_section));
						sprintf(dest_section,"proftpd.@share[%d].rw_list",j);
						ret = do_uci_get(dest_section,tmp_rw_list);
						cgi_trace_line();	
					}
				}
			}
		}
	}
	
	cgi_trace_line();
	if(tmp_ro_list[0]!=0)//fix the bug-1250
		sprintf(ro_list,",%s,",tmp_ro_list);
	if(tmp_rw_list[0]!=0)//fix the bug-1250
		sprintf(rw_list,",%s,",tmp_rw_list);
	
	cgi_dbg("1:ro_list:[%s]\n",ro_list);
	cgi_dbg("1:rw_list:[%s]\n",rw_list);

	cgi_dbg("2:ro_list:[%s]\n",ro_list);
	cgi_dbg("2:rw_list:[%s]\n",rw_list);
	
	
	if(guest_flag){
		cgi_trace_line();	
		json_object_object_add(obj, "IsAllowAnonym", json_object_new_string("1"));
	}else{
		cgi_trace_line();	
		json_object_object_add(obj, "IsAllowAnonym", json_object_new_string("0"));
		/*deal with all the users*/
		for(i=0;i<30;i++){
			cgi_trace_line();	
			memset(dest_section, 0x00, sizeof(dest_section));
			sprintf(dest_section,"pwd.@userinfo[%d].name",i);
			memset(opt_value,0x00,sizeof(opt_value));
			ret = do_uci_get(dest_section,opt_value);//get the user_name to the opt_value
			if(!ret){
				memset(tmp_opt_value,0x00,sizeof(tmp_opt_value));
				sprintf(tmp_opt_value,",%s,",opt_value);//fix the bug-1250
				cgi_dbg("the tmp_opt_value is [%s]\n",tmp_opt_value);
					cgi_dbg("the opt_value is [%s]\n",opt_value);
				userinfo[i]= json_object_new_object();
				memset(dest_section, 0x00, sizeof(dest_section));
				sprintf(dest_section,"pwd.@userinfo[%d].editable",i);
				do_uci_get(dest_section,linebuffer);
				if((ro_list[0] != 0) && (strstr(ro_list,tmp_opt_value))){/*1*/
					json_object_object_add(userinfo[i],"Name",json_object_new_string(opt_value));
					json_object_object_add(userinfo[i],"IsEditable",json_object_new_string(linebuffer));
					json_object_object_add(userinfo[i],"Permit",json_object_new_string("1"));
				}else if((rw_list[0] != 0) && (strstr(rw_list,tmp_opt_value))){/*2*/
					json_object_object_add(userinfo[i],"Name",json_object_new_string(opt_value));
					json_object_object_add(userinfo[i],"IsEditable",json_object_new_string(linebuffer));
					json_object_object_add(userinfo[i],"Permit",json_object_new_string("2"));
				}else{/*0*/
					json_object_object_add(userinfo[i],"Name",json_object_new_string(opt_value));
					json_object_object_add(userinfo[i],"IsEditable",json_object_new_string(linebuffer));
					json_object_object_add(userinfo[i],"Permit",json_object_new_string("0"));
				}
				json_object_array_add(array, userinfo[i]);
			}
			
		}
		
	}

	cgi_trace_line();
	
	json_object_object_add(obj, "Accounts", array);
	strcpy(flow, json_object_to_json_string(obj));

	if (val == NULL) {
		fprintf(stdout, "%s", flow);
	} else {
		sprintf(val, "%s", flow);
	}
	
	json_object_put(obj);
	json_object_put(array);
	for(i = 0;i<30;i++){
		json_object_put(userinfo[i]);
	}
	cgi_trace_line();	

		
	cgi_trace_exit();
	
	return ret;
}
int setftppermission(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();
	int ret = -1;

	json_object *i_obj = NULL;
	json_object *sub_obj = NULL;
	
	
	json_object *cli_obj_name = NULL;
	json_object *cli_obj_permit = NULL;
	json_object *accountinfo = NULL;

	json_object *item = NULL;

	
	char linebuffer[1024] = {0};
	//char dest_disk[128] = {0};
	char dest_part[128] = {0};
	char dest_dir[128] = {0};
	char dest_section[128] = {0};
	char opt_value[1024] = {0}; 
	int i = 0;
	char ro_list[1024] = {0};
	char rw_list[1024] = {0};
	char *p = NULL;
	char *q = NULL;
	char sec_name[256] = {0};
	char sec_tmp[256] = {0};
	char allowgest[2] = {0};
	int add_share_flag = 0;
	int no_share_flag = 0;
	char tmp[1024] = {0};
	
	i_obj = json_tokener_parse(list);
	json_object_object_get_ex(i_obj, "DiskName", &sub_obj);
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("Set ftp permission option  wrong\n");
		goto error;
	}
	json_object_object_get_ex(i_obj, "PartitionName", &sub_obj);
	if(sub_obj){
		strcpy(dest_part,json_object_get_string(sub_obj));
	}
	json_object_object_get_ex(i_obj, "FolderName", &sub_obj);
	if(sub_obj){
		strcpy(dest_dir,json_object_get_string(sub_obj));
	}

	json_object_object_get_ex(i_obj, "IsAllowGuest", &sub_obj);
	if(sub_obj){
		strcpy(allowgest,json_object_get_string(sub_obj));
	}else{
		strcpy(allowgest,"0");//set a default value
	}
	
	json_object_object_get_ex(i_obj, "Accounts", &accountinfo);
	
	sprintf(linebuffer,"/mnt/%s/%s",dest_part,dest_dir);/*organize the path of the dest folder*/
	/*get the ro_list and the rw_list*/
	json_object_object_get_ex(i_obj, "Accounts", &accountinfo);
	
	cgi_dbg("the accounts:[%s]\n",json_object_to_json_string(accountinfo));
	
	if(accountinfo){
		p = ro_list;
		q = rw_list;
		cgi_trace_line();
		if(json_type_array == json_object_get_type(accountinfo)){
			cgi_trace_line();
			for(i=0; i < json_object_array_length(accountinfo); i++){
				cgi_trace_line();
				item = json_object_array_get_idx(accountinfo, i);
				json_object_object_get_ex(item, "Permit", &cli_obj_permit);
				json_object_object_get_ex(item, "Name", &cli_obj_name);
				if(json_object_get_int(cli_obj_permit) == 1){
					if(ro_list[0] == 0){
						p += sprintf(p,"%s",json_object_get_string(cli_obj_name));
						cgi_trace_line();
						cgi_dbg("the user name[%d] :[%s]\n",i,json_object_get_string(cli_obj_name));
					}else{
						p += sprintf(p,",%s",json_object_get_string(cli_obj_name));
						cgi_trace_line();
						cgi_dbg("the user name[%d] :[%s]\n",i,json_object_get_string(cli_obj_name));
					}
				}else if(json_object_get_int(cli_obj_permit) == 2){
					if(rw_list[0] == 0){
						q += sprintf(q,"%s",json_object_get_string(cli_obj_name));
						cgi_trace_line();
						cgi_dbg("the user name[%d] :[%s]\n",i,json_object_get_string(cli_obj_name));
					}else{
						q += sprintf(q,",%s",json_object_get_string(cli_obj_name));
						cgi_trace_line();
						cgi_dbg("the user name[%d] :[%s]\n",i,json_object_get_string(cli_obj_name));
					}
				}else {
					continue;
				}	
				json_object_put(cli_obj_name);
				json_object_put(cli_obj_permit);
			}
		}				
	}
	p = NULL;
	q = NULL;
	cgi_dbg("ro_list:%s\n",ro_list);
	cgi_dbg("rw_list:%s\n",rw_list);

	/*set the ro_list and the rw_list to the dest shared folder*/	
	for(i = 0;i < 30; i++){
		if(add_share_flag){
			break;
		}
		memset(dest_section, 0x00, sizeof(dest_section));
		sprintf(dest_section,"proftpd.@share[%d].path",i);
		ret = do_uci_get(dest_section,opt_value);
		if((!ret) ){/*if there are some share section*/
			if(opt_value[0] != 0){/*if there are same shared folders*/
				if( strcmp(linebuffer,opt_value)==0){/*if the dest shared folder is existing*/
					cgi_dbg("modify the exist sharing\n");
					/*delete all the old user list*/
					
					//check if the ro_list and rw_list if exist
					memset(dest_section, 0x00, sizeof(dest_section));
					sprintf(dest_section,"proftpd.@share[%d].ro_list",i);
					ret = do_uci_get(dest_section,tmp);
					if(!ret){//the ro_list is not none so delete the rw_list
						memset(dest_section, 0x00, sizeof(dest_section));
						sprintf(dest_section,"proftpd.@share[%d].ro_list",i);
						do_uci_delete(dest_section,NULL);
					}	
					memset(dest_section, 0x00, sizeof(dest_section));
					sprintf(dest_section,"proftpd.@share[%d].rw_list",i);
					memset(tmp, 0x00, sizeof(tmp));
					ret = do_uci_get(dest_section,tmp);
					if(!ret){//the rw_list is not none so delete the rw_list
						memset(dest_section, 0x00, sizeof(dest_section));
						sprintf(dest_section,"proftpd.@share[%d].rw_list",i);
						ret = do_uci_delete(dest_section,NULL);
					}
					
					ret = 0;
					
					if(ro_list[0]!= 0){
						memset(dest_section, 0x00, sizeof(dest_section));
						sprintf(dest_section,"proftpd.@share[%d].ro_list",i);
						ret = do_uci_add_list(dest_section,ro_list);
					}
					if(rw_list[0] != 0){
						memset(dest_section, 0x00, sizeof(dest_section));
						sprintf(dest_section,"proftpd.@share[%d].rw_list",i);
						ret = do_uci_add_list(dest_section,rw_list);					
					}
					no_share_flag = 0;
					
					break;
				}
			}
		}else{/*if there is no any shared section*/
#if 0
				cgi_trace_line();
				cgi_dbg("there are no any sharing already,so this time to add a new sharing\n");
					
				ret = do_uci_add("proftpd","share",sec_name);//add the share section

				memset(sec_tmp, 0x00, sizeof(sec_tmp));
				sprintf(sec_tmp,"proftpd.%s.path",sec_name);
				ret = do_uci_set(sec_tmp,linebuffer);//set the option path
				
				memset(sec_tmp, 0x00, sizeof(sec_tmp));
				sprintf(sec_tmp,"proftpd.%s.anon_auth",sec_name);				
				if(strcmp(allowgest,"0")==0){
					ret  = do_uci_set(sec_tmp,"0");//set the option anon_auth 
				}else{
					ret  = do_uci_set(sec_tmp,"2");//set the option anon_auth 
				}
				
				if(ro_list[0] !=0){
					memset(sec_tmp, 0x00, sizeof(sec_tmp));
					sprintf(sec_tmp,"proftpd.%s.ro_list",sec_name);
					ret = do_uci_set(sec_tmp, ro_list);//set the ro_list
				}
				if(rw_list[0] != 0){
					memset(sec_tmp, 0x00, sizeof(sec_tmp));
					sprintf(sec_tmp,"proftpd.%s.rw_list",sec_name);
					ret = do_uci_set(sec_tmp, rw_list);//set the rw_list
				}
				add_share_flag=1;
				no_share_flag = 0;
#endif	
				no_share_flag = 1;
				break;
			}

			cgi_trace_line();
			no_share_flag = 1;
	}

	if(no_share_flag){
	/*the dest share folder has not been existiong*/

		cgi_trace_line();
		cgi_dbg("there are some sharing already,but this time to add a new sharing\n");
		
		ret = do_uci_add("proftpd","share",sec_name);//add the share section and get the code to sec_name

		memset(sec_tmp, 0x00, sizeof(sec_tmp));
		sprintf(sec_tmp,"proftpd.%s.path",sec_name);
		ret = do_uci_set(sec_tmp,linebuffer);//set the option path
		
		cgi_dbg("add the dest shared path%s\n",linebuffer);
		
		memset(sec_tmp, 0x00, sizeof(sec_tmp));
		sprintf(sec_tmp,"proftpd.%s.anon_auth",sec_name);	
		if(strcmp(allowgest,"0")==0){
			ret  = do_uci_set(sec_tmp,"0");//set the option anon_auth 
		}else{
			ret  = do_uci_set(sec_tmp,"2");//set the option anon_auth 
		}
		
		if(ro_list[0] !=0){
			memset(sec_tmp, 0x00, sizeof(sec_tmp));
			sprintf(sec_tmp,"proftpd.%s.ro_list",sec_name);
			ret = do_uci_add_list(sec_tmp, ro_list);//set the ro_list
		}
		if(rw_list[0] != 0){
			memset(sec_tmp, 0x00, sizeof(sec_tmp));
			sprintf(sec_tmp,"proftpd.%s.rw_list",sec_name);
			ret = do_uci_add_list(sec_tmp, rw_list);//set the rw_list
		}
					
	}

	
error:
	if (ret == 0){
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		}
		do_uci_commit("proftpd");
		do_cmd("/etc/init.d/proftpd  restart");	
	} else {
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		}
	}
	
	cgi_trace_exit();
	
	return ret;
}
int anonymftpshare(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();	
	int ret = -1;
	json_object *i_obj = NULL;
	json_object *sub_obj = NULL;
	i_obj = json_tokener_parse(list);
	int allowguest = 0;
	char dest_path[128] = {0};
	char dest_path_tmp[128] = {0};
	char linebuffer[256] = {0};
	char sec_name[256] = {0};
	//char sec_tmp[256] = {0};
	
	int set_flag = 0;
	int i = 0;
	char dest_sec[1024] = {0};
	//char linebuffer[1024]= {0};
	char opt_value[128] = {0};
	
	json_object_object_get_ex(i_obj, "IsAllowAnonym", &sub_obj);
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("Set ftp guest share option failed\n");
		goto error;
	}
	allowguest = json_object_get_int(sub_obj);
	
	json_object_object_get_ex(i_obj, "Dir", &sub_obj);
	if(sub_obj){
		strcpy(dest_path_tmp,json_object_get_string(sub_obj));
	}
	sprintf(dest_path,"/mnt%s",dest_path_tmp);
	
	cgi_dbg("the dest sharing path is %s\n",dest_path);
	
	for (i = 0;i < 30;i++){
		if(set_flag){
			break;
		}
		cgi_dbg("loop here!\n");
		memset(dest_sec, 0x00, sizeof(dest_sec));
		sprintf(dest_sec,"proftpd.@share[%d].path",i);
		ret = do_uci_get(dest_sec,opt_value);
		if(!ret){
			if(strcmp(opt_value,dest_path)==0){
				
				cgi_dbg("get the dest section !!!!!\n");
				
				if(allowguest == 0){/*here should delete the shared folder.*/
					cgi_dbg("set the anon_auth to 0\n");
					
					memset(dest_sec, 0x00, sizeof(dest_sec));
					//sprintf(dest_sec,"proftpd.@share[%d].anon_auth",i);
					//ret = do_uci_set(dest_sec,"0");
					sprintf(dest_sec,"proftpd.@share[%d]",i);
					ret = do_uci_delete(dest_sec,NULL);
					if(!ret){
						set_flag = 1;
					}
				}else{
					cgi_dbg("set the anon_auth to 2\n");
					memset(dest_sec, 0x00, sizeof(dest_sec));
					sprintf(dest_sec,"proftpd.@share[%d].anon_auth",i);
					ret = do_uci_set(dest_sec,"2");//the 2 means allow the guest to write the shared folder
					if(!ret){/*if set the dest sharing to allow guest to access,
					 		then delete all the ro_list and rw_list*/
						set_flag = 1;
						
						/*delete all the ro_list and rw_list if they are existing*/
						memset(dest_sec, 0x00, sizeof(dest_sec));
						sprintf(dest_sec,"proftpd.@share[%d].ro_list",i);
						memset(opt_value, 0x00, sizeof(opt_value));
						ret = do_uci_get(dest_sec,opt_value);
						if((!ret)&&(opt_value[0] != 0)){
							cgi_dbg("delete the exist user list !!!!!\n");
							memset(dest_sec, 0x00, sizeof(dest_sec));
							sprintf(dest_sec,"proftpd.@share[%d].ro_list",i);
							//do_uci_delete(dest_sec,"ro_list");
							ret = do_uci_delete(dest_sec,NULL);							
							if(!ret){
								cgi_dbg("delete the ro_list successfully\n");
							}	
						}
						memset(dest_sec, 0x00, sizeof(dest_sec));
						sprintf(dest_sec,"proftpd.@share[%d].rw_list",i);
						memset(opt_value, 0x00, sizeof(opt_value));
						ret = do_uci_get(dest_sec,opt_value);
						if((!ret)&&(opt_value[0] != 0)){
							cgi_dbg("delete the exist user list !!!!!\n");
							memset(dest_sec, 0x00, sizeof(dest_sec));
							sprintf(dest_sec,"proftpd.@share[%d].rw_list",i);
							//do_uci_delete(dest_sec,"rw_list");
							ret = do_uci_delete(dest_sec,NULL);
							if(!ret){
								cgi_dbg("delete the rw_list successfully\n");
							}
							
						}
						ret = 0;
					}
				}
			}
		}

	}
	if(set_flag == 0){
		/*there is no any shared folder*/
		/*add the user to the plain passwd config file who's name is pwd*/
		if(allowguest!=0){
			ret = do_uci_add("proftpd","share",sec_name);
			//sprintf(sec_tmp,"proftpd.%s",sec_name);
			//ret = do_uci_rename(sec_tmp, user_name);
			
			memset(linebuffer, 0x00 ,sizeof(linebuffer));
			sprintf(linebuffer,"proftpd.%s.path",sec_name);
			ret = do_uci_set(linebuffer,dest_path);//set the path option

			memset(linebuffer, 0x00 ,sizeof(linebuffer));
			sprintf(linebuffer,"proftpd.%s.anon_auth",sec_name);
			ret = do_uci_set(linebuffer,"2");	
		}
	#if 0
		if(allowguest == 0){
			ret = do_uci_set(linebuffer,"0");	
		}else{
			ret = do_uci_set(linebuffer,"2");	
		}
	#endif
	
	}

	cgi_dbg("commit the proftpd config \n");


error:
	if (ret == 0){
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		}
		do_uci_commit("proftpd");		
		do_cmd("/etc/init.d/proftpd restart");	 
	} else {
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		}
	}
	
	cgi_trace_exit();
	
	return ret;
}

int getitunesinfo(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();	
	int ret = -1;	
	json_object *obj = NULL;

	char opt_value[128] = {0};
	char flow[2048] = {0};
	
	
	obj = json_object_new_object();
	memset(opt_value, 0x00 ,sizeof(opt_value));
	ret = do_uci_get(ITUNES_ENABLE,opt_value);
	if(!ret){
		json_object_object_add(obj, "IsEnable", json_object_new_string(opt_value));
	}
	memset(opt_value, 0x00 ,sizeof(opt_value));
	ret = do_uci_get(ITUNES_PATH,opt_value);
	if(!ret){
		json_object_object_add(obj, "ServerPath", json_object_new_string(opt_value));
	}

	strcpy(flow, json_object_to_json_string(obj));
	
	
	if (val == NULL) {
		fprintf(stdout, "%s", flow);
	} else {
		sprintf(val, "%s", flow);
	}		

	json_object_put(obj);
	
	
	cgi_trace_exit();
	
	return ret;
}
int setitunesinfo(tcm_session *session, char *name, char *val, char *list)
{
	cgi_trace_enter();	
	int ret = -1;	

	json_object *i_obj = NULL;
	json_object *sub_obj = NULL;
	int itunes_enable = 0;
	char share_path[128] = {0};

	i_obj = json_tokener_parse(list);
	json_object_object_get_ex(i_obj, "IsEnable", &sub_obj);
	
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("Set iTunes server option failed\n");
		goto error;
	}
	itunes_enable = json_object_get_int(sub_obj);
	if(itunes_enable == 1){
		ret = do_uci_set(ITUNES_ENABLE,"1");
		json_object_put(sub_obj);
		if(!ret){
			json_object_object_get_ex(i_obj, "ServerPath", &sub_obj);
			strcpy(share_path,json_object_get_string(sub_obj));
			ret = do_uci_set(ITUNES_PATH,share_path);
			if(ret != 0){
				goto error;
			}
	
		}else{
			goto error;
		}
	}else{
		ret = do_uci_set(ITUNES_ENABLE,"0");
	}


error:
	if (ret == 0){
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":true, \"FailReason\":\"\"}");
		}
		do_uci_commit("mtdaapd");
		
		do_cmd("/etc/init.d/mtdaapd restart");
		 
	} else {
		if (val == NULL) {
			fprintf(stdout, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		} else {
			sprintf(val, "%s", "{\"Success\":false, \"FailReason\":\"err_0002\"}");
		}
	}

	
	cgi_trace_exit();
	
	return ret;

}
int addsharecheck(tcm_session *session, char *name, char *val, char *list)
{
	
	cgi_trace_enter();	
	int ret = -1;
	json_object *i_obj = NULL;
	json_object *obj = NULL;
	json_object *sub_obj = NULL;
	char service[32] = {0};
	char linebuffer[2048] = {0};
	int sharelimit = 0; 
	int sharecount = 0;
	FILE * fp;
	char cmdline[1024] = {0};
	char flow[128] = {0};
	char sharefolder[128] = {0};
	int modflag = 0;
	
	obj = json_object_new_object();	
	i_obj = json_tokener_parse(list);
	
	json_object_object_get_ex(i_obj, "Service", &sub_obj);
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("check the addshare option failed\n");
		return ret;
	}
	strcpy(service,json_object_get_string(sub_obj));

	json_object_object_get_ex(i_obj, "Dir", &sub_obj);
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("check the addshare option failed\n");
		return ret;
	}
	sprintf(sharefolder,"/mnt%s",json_object_get_string(sub_obj));
	cgi_dbg("the sharefolder is %s\n",sharefolder);
	
	/*check if the dest dir is already in the shared folder list of the service*/
	sprintf(cmdline,"cat /etc/config/%s |grep path |awk  '{print $3}'|xargs echo -n",service);
	fp = popen(cmdline,"r");
	if(fp != NULL){
		if(fgets(linebuffer,2048,fp)!=NULL){
			cgi_dbg("the shared folder list :[%s]\n",linebuffer);
			if(strstr(linebuffer,sharefolder)){
				modflag = 1;
			}else{
				modflag = 0;
			}
		}
	}
	pclose(fp);
	if(modflag){
		cgi_dbg("It's modifing the shared folder\n");
		json_object_object_add(obj, "CanAddShare", json_object_new_int(1));	
	}else{
		/*check if the sum number of the shared folders is reach the limited number*/
		//get the share limit number from the config file.
		cgi_dbg("It's to add the shared folder\n");
		if(strcmp(service,"samba")==0)
			ret = do_uci_get(SAMBA_SHARE_LIMIT,linebuffer);
		else if(strcmp(service,"proftpd")==0)
			ret = do_uci_get(FTP_SHARE_LIMIT,linebuffer);
		if(!ret){
			if(linebuffer[0] != 0){
				sharelimit	=atoi(linebuffer);
				cgi_dbg("The shared folder limited to be %d\n",sharelimit);
			}
		}
		//get the shared count from the shared section.
		memset(cmdline,0x00,sizeof(cmdline));
		sprintf(cmdline," cat  /etc/config/%s |grep -rn \"config share\" -c",service);
		memset(linebuffer,0x00,sizeof(linebuffer));
		fp = popen(cmdline,"r");
		if(fp != NULL){
			if(fgets(linebuffer,16,fp)!=NULL){
				sharecount = atoi(linebuffer);
				cgi_dbg("There are %d shared folders in the %s server\n",sharecount,service);
			}
		}
		pclose(fp);

		if(sharecount >= sharelimit){
			json_object_object_add(obj, "CanAddShare", json_object_new_int(0));	
		}else{
			json_object_object_add(obj, "CanAddShare", json_object_new_int(1));	
		}
	}
	
#if 0	
	if(strcmp(service,"samba")==0){/*check the samba*/
		//get the share limit number from the config file.
		ret = do_uci_get(SAMBA_SHARE_LIMIT,linebuffer);
		if(!ret){
			if(linebuffer[0] != 0){
				sharelimit	=atoi(linebuffer);
			}
		}
		//get the shared count from the shared section.
		sprintf(cmdline," cat  /etc/config/samba |grep -rn \"config share\" -c");
		memset(linebuffer,0x00,sizeof(linebuffer));
		fp = popen(cmdline,"r");
		if(fp != NULL){
			if(fgets(linebuffer,16,fp)!=NULL){
				sharecount = atoi(linebuffer);
			}
		}
		pclose(fp);

		if(sharecount >= sharelimit){
			json_object_object_add(obj, "CanAddShare", json_object_new_int(0));	
		}else{
			json_object_object_add(obj, "CanAddShare", json_object_new_int(1));	
		}
		
	}else if(strcmp(service,"ftp") == 0){/*check the ftp*/
		//get the share limit number from the config file.
		memset(linebuffer,0x00,sizeof(linebuffer));
		ret = do_uci_get(FTP_SHARE_LIMIT,linebuffer);
		if(!ret){
			if(linebuffer[0] != 0){
				sharelimit	=atoi(linebuffer);
			}
		}
		//get the shared count from the shared section.
		sprintf(cmdline," cat  /etc/config/proftpd |grep -rn \"config share\" -c");
		memset(linebuffer,0x00,sizeof(linebuffer));
		fp = popen(cmdline,"r");
		if(fp != NULL){
			if(fgets(linebuffer,16,fp)!=NULL){
				sharecount = atoi(linebuffer);
			}
		}
		pclose(fp);

		if(sharecount >= sharelimit){
			json_object_object_add(obj, "CanAddShare", json_object_new_int(0));	
		}else{
			json_object_object_add(obj, "CanAddShare", json_object_new_int(1));	
		}
	}

#endif

	strcpy(flow, json_object_to_json_string(obj));
	
	json_object_put(obj);

	if (val == NULL) {
		fprintf(stdout, "%s", flow);
	} else {
		sprintf(val, "%s", flow);
	}
	
	cgi_trace_exit();	
	return ret;
	
}

int partsharecheck(tcm_session *session, char *name, char *val, char *list){

	cgi_trace_enter();	
	int ret = -1;

	json_object *i_obj = NULL;
	json_object *obj = NULL;
	json_object *sub_obj = NULL;
	char dest_part[128] = {0};
	char service[128]={0};

	char flow[128]={0};
	int i = 0;
	char dest_section[128] = {0};
	char opt_value[128] = {0};
	int share_flag = 0;
	
	obj = json_object_new_object();	
	i_obj = json_tokener_parse(list);
	json_object_object_get_ex(i_obj, "DiskName", &sub_obj);
	if(sub_obj == NULL) {
		json_object_put(i_obj);
		json_object_put(sub_obj);
		cgi_err("Set samba permission option  wrong\n");
		//goto error;
		ret = -1;
	}
	json_object_object_get_ex(i_obj, "PartitionName", &sub_obj);
	if(sub_obj){
		//strcpy(dest_part,json_object_get_string(sub_obj));
		sprintf(dest_part,"/mnt/%s",json_object_get_string(sub_obj));
	}
	//cgi_dbg("the dest partition name is :[%s]\n",dest_part);
	
	cgi_dbg("in fact the dest partition name should be :[%s]\n",dest_part);
	
	json_object_object_get_ex(i_obj, "ServiceName", &sub_obj);
	if(sub_obj){
		strcpy(service,json_object_get_string(sub_obj));
	}
	cgi_dbg("the service  name is :[%s]\n",service);
	
	if(!strcmp(service,"samba")){/*samba*/
		;
	}else if(!strcmp(service,"ftp")){/*ftp*/
		;
	}else if (!strcmp(service,"dlna")){/*dlna*/
		;
	}else{
		cgi_dbg("Wrong service name or there is no service name inputed!\n");
		ret = -1;
	}
	i = 0;
	//for(i=0; i<30; i++){
	for(;;){
		memset(dest_section,0x00,sizeof(dest_section));
		sprintf(dest_section,"%s.@share[%d].path",service,i);
		memset(opt_value,0x00,sizeof(opt_value));
		ret = do_uci_get(dest_section,opt_value);
		if(!ret){
			if(!strcmp(dest_part,opt_value)){
				share_flag = 1;
				break;
			}
		}else{
			cgi_dbg("get to the error uci get!\n");
			break;
		}
		i++;
	}
	cgi_trace_line();
	
	if(share_flag == 1){
		cgi_dbg("The dest partition has been shared!\n");
		json_object_object_add(obj, "IsShared", json_object_new_int(1));
	}else{
		cgi_dbg("The dest partition has not been shared!\n");
		json_object_object_add(obj, "IsShared", json_object_new_int(0));
	}
	
	cgi_trace_line();
	
	strcpy(flow, json_object_to_json_string(obj));
	
	cgi_trace_line();
	
	json_object_put(obj);

	if (val == NULL) {
		fprintf(stdout, "%s", flow);
	} else {
		sprintf(val, "%s", flow);
	}
	
	cgi_trace_exit();	
	return ret;

	
}











