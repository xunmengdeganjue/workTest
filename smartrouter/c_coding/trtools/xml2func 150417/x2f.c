#include <stdio.h>
#include <string.h>
#include <libxml/parser.h>
#include <libxml/tree.h>

#define MAX_FUNC_LIST	8192//4096
#define MAX_FUNC_NAME	128//72
#define MAX_ATTR_DEPTH	48//24
#define MAX_ATTR_LENGTH	96

FILE *fp1 = 0;
FILE *fp2 = 0;
FILE *fp3 = 0;

char func_name[MAX_FUNC_NAME];
char attr_path[MAX_ATTR_DEPTH][MAX_ATTR_LENGTH];
int  attr_depth = 0;
int  in_node = 0;

char func_list[MAX_FUNC_LIST][MAX_FUNC_NAME];
int  func_list_num = 0;

void print_element_names(xmlNode * a_node)
{
    xmlNode *cur_node = NULL;
	xmlChar *attr_type;
	xmlChar *attr_name;
	xmlChar *attr_rw;
	xmlChar *attr_val;
	char tmp[16];
	int i = 0;

	for (cur_node = a_node; cur_node; cur_node = cur_node->next) 
	{
		if (cur_node->type == XML_ELEMENT_NODE) 
		{
			attr_type = xmlGetProp(cur_node, "type");
			if (!strcmp(attr_type, "node")) 
			{
				attr_name = xmlGetProp(cur_node, "name");
				strcpy(attr_path[attr_depth], (char*)attr_name);
				attr_depth++;
			}		
			else 
			{
				in_node = 1;
				memset(func_name, 0, sizeof(func_name));
				strcpy(func_name, "get_");
				for (i=0 ; i<attr_depth ; i++)
					func_name[i+4] = attr_path[i][0];
				fprintf(fp1, "\t{\"");
				for (i=0 ; i<attr_depth ; i++)
					fprintf(fp1, "%s.", attr_path[i]);
				attr_name = xmlGetProp(cur_node, "name");
				attr_rw = xmlGetProp(cur_node, "rw");
				strcat(func_name, "_");
				strcat(func_name, attr_name);
				// find duplicates
				for (i=0 ; i<func_list_num ; i++)
					if (!strcmp(func_list[i], func_name)) 
					{	
						sprintf(tmp, "_%d", func_list_num);
						strcat(func_name, tmp);	
					}
				fprintf(fp1, "%s\", %s, ", attr_name , func_name);
				strcpy(func_list[func_list_num++], func_name);
				if (func_list_num >= MAX_FUNC_LIST) 
				{
					printf("Error : Too many function definitions, try increase table size ...! \n");
					exit(1);
				}
				func_name[0] = 's';
				//if ((!strcmp(attr_rw, "true"))||(!strcmp(attr_rw,"1"))) 
				if((!strcmp(attr_rw,"true"))||(atoi(attr_rw) == 1))
				{
					fprintf(fp1, "%s, ", func_name);
					strcpy(func_list[func_list_num++], func_name);
				}	
				else	
					fprintf(fp1, "0, ");
			}
			attr_depth++;
			if (attr_depth >= MAX_ATTR_DEPTH) 
			{
				printf("Error : Too many layers in Data Model, try increase attribute depth ...! \n");
				exit(1);
			}
		}
		else if (cur_node->type == XML_TEXT_NODE)
		{
			if (*(cur_node->content) < ' ') 
			{	// </node>
				if (attr_depth) 
					attr_depth--;
				if (in_node) {	
					fprintf(fp1, "\"\"},\n"); 
					in_node = 0;	
				}
			}
			else 
			{
				if (*(cur_node->content) != '\0') 
				{
					fprintf(fp1, "\"%s\"},\n", cur_node->content);
					in_node = 0;	
				} 
			}
		}
		print_element_names(cur_node->children);
    }
}


int main(int argc, char **argv)
{
    xmlDoc *doc = NULL;
    xmlNode *root_element = NULL;
    int i;

    if (argc != 2)
        return(1);

    LIBXML_TEST_VERSION

    doc = xmlReadFile(argv[1], NULL, 0);
    if (doc == NULL) {
        printf("Error: can not parse file %s\n", argv[1]);
        return(1);
    }

	fp1 = fopen("tr69_handler_table.h", "w");
	if (!fp1) {
        printf("Error: can not create file %s\n", "tr69_table.h");
        return(1);
    }
	fp2 = fopen("tr69_handler_ext.h", "w");
	if (!fp2) {
		fclose(fp1);
        printf("Error: can not create file %s\n", "tr69_handler_Ext.h");
        return(1);
    }
	fp3 = fopen("tr69_handler.h", "w");
	if (!fp3) {
		fclose(fp1);
		fclose(fp2);
        printf("Error: can not create file %s\n", "tr69_handler.h");
        return(1);
    }
    
		memset(func_list, 0, sizeof(func_list));
    	root_element = xmlDocGetRootElement(doc);
    	fprintf(fp1, "typedef struct TR69_FUNC_TABLE {\n\tchar *path_name;\n\tint (*get_proc)(char *path, char *value);\n\tint (*set_proc)(char *path, char *value);\n\tchar *default_value;\n} TR69_FUNC_TABLE;\n\n");
    	fprintf(fp1, "TR69_FUNC_TABLE tr69_param[] = {\n");
    	print_element_names(root_element);
    	fprintf(fp1, "\t{\"\",0,0,\"\"}\n};\n");
    	fclose(fp1);
 
	for (i=0 ; i<func_list_num ; i++)
		fprintf(fp2, "extern int %s(char *, char *);\n", func_list[i]);
	fclose(fp2);

	// fprintf(fp3,"#include <stdio.h>\n");
	fprintf(fp3,"#include \"tr69_handler_ext.h\"\n");
	fprintf(fp3,"#include \"tr69_handler_table.h\"\n\n");
	for (i=0 ; i<func_list_num ; i++)
		fprintf(fp3, "int %s(char * path_name, char *value)\n{\n\treturn(0);\n}\n\n", func_list[i]);
	// fprintf(fp3, "\nmain()\n{\n}\n\n");
	fclose(fp3);

	xmlFreeDoc(doc);
	xmlCleanupParser();

	return 0;
}
