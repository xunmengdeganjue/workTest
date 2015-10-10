#include <db.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student_record
{
      char student_id[5];
      char last_name[16];
      char first_name[16];
};
DB *dbp, *sdbp;
DB_ENV *dbenv;
int getname(DB *secondary, const DBT *pkey, const DBT *pdata, DBT *skey)
{
      memset(skey, 0, sizeof(DBT));
      skey->data = ((struct student_record *)pdata->data)->last_name;
      skey->size = sizeof(((struct student_record *)pdata->data)->last_name);
      return (0);
}
void init_db()
{
      int ret;
      int env_flags = DB_CREATE |  DB_INIT_MPOOL; /* Initialize the in-memory cache. */
      //创建数据库环境
      if((ret = db_env_create(&dbenv, 0)) != 0)
      {
              printf("db_env_create error! ");
              return;
      }
      ret = dbenv->open(dbenv,"secondary",env_flags,0);
      if(ret != 0)
      {
              printf("open environment error! ");
              return;
      }
      /* Open/create primary */
      if ((ret = db_create(&dbp, dbenv, 0)) != 0)
      {
              printf("create primary db error! ");
              return;
      }
      if ((ret = dbp->open(dbp,NULL,"students.db",NULL,DB_BTREE,DB_CREATE,0)) != 0)
      {
              printf("open primary db error! ");
              return;
      }
      /*
      * Open/create secondary.  Note that it supports duplicate data
      * items, since last names might not be unique.
      */
      if ((ret = db_create(&sdbp, dbenv, 0)) != 0)
      {
              printf("create secondary db error! ");
              return;
      }
      if ((ret = sdbp->set_flags(sdbp, DB_DUP | DB_DUPSORT)) != 0)
      {
              printf("open secondary db flags error! ");
              return;
      }
      if ((ret = sdbp->open(sdbp,NULL,"lastname.db",NULL,DB_BTREE,DB_CREATE,0)) != 0)
      {
              printf("open secondary db error! ");
              return;
      }
      if ((ret = dbp->associate(dbp, NULL, sdbp, getname, 0)) != 0)
      {
              printf("open associate primary with secondary db error! ");
              return;
      }
}


void write_to_db()
{
      struct student_record s;
      DBT data, key;
      int ret;
      memset(&key, 0, sizeof(DBT));
      memset(&data, 0, sizeof(DBT));
      memset(&s, 0, sizeof(struct student_record));
      key.data = "WC42";
      key.size = 5;
      memcpy(&s.student_id, "WC42", sizeof(s.student_id));
      memcpy(&s.last_name, "Churchill      ", sizeof(s.last_name));
      memcpy(&s.first_name, "Winston        ", sizeof(s.first_name));
      printf("student id: %s, last name: %s, first name: %s \n", s.student_id, s.last_name, s.first_name);
      data.data = &s;
      data.size = sizeof(s);
      //写一条记录到数据库中，其索引数据同样也会被写到secondary indexes数据库中
      if ((ret = dbp->put(dbp, NULL, &key, &data, 0)) != 0)
      {
              printf("put data error! \n");
              return;
      }
      printf("write date end\n");
}

void read_from_secondary()
{
      DBT data, pkey, skey;
      int ret;
      memset(&skey, 0, sizeof(DBT));
      memset(&pkey, 0, sizeof(DBT));
      memset(&data, 0, sizeof(DBT));
      skey.data = "Churchill      ";
      skey.size = 16;
//    skey.size = sizeof("Churchill");
      //从secondary indexes表中读取记录（通过Db->pget）
      //如果一个索引项对应了多条记录，这个pkey会是哪条记录的key呢？
      //这个时候应该要使用游标了吧
      if ((ret = sdbp->pget(sdbp,NULL, &skey, &pkey, &data, 0)) != 0)
      {
              printf("get data error! \n");
              db_strerror(ret);
              return;
      }
      //从secondary indexes表中读取记录（通过Db->get）
      /*if ((ret = sdbp->get(sdbp,NULL, &skey, &data, 0)) != 0)
      {
              printf("get data error! ");
              db_strerror(ret);
              return;
      }*/
      struct student_record * stu = (struct student_record *)data.data;
      //printf("pkey: %s ", (char*)pkey.data);
      printf("student id: %s, last name: %s, first name: %s \n", stu->student_id, stu->last_name, stu->first_name);
      printf("read!! \n");
}


void delete_from_secondary()
{
      DBT key, data;
      int ret;
      memset(&key, 0, sizeof(DBT));
      memset(&data, 0, sizeof(DBT));
      key.data = "Churchill      ";
      key.size = 16;
      //在secondary indexes上删除一条记录，它同样会删除主表上对应的记录
      //如果该索引对应着多条记录，那么所有的相关记录都将被删除
      //让人搞不懂的是删除一条记录居然还会调用上面的getname函数
      //如果说put一条记录时，需要调用getname来获得索引项是理所当然的
      //删除的时候这样做让人很想不通
      if ((ret = sdbp->del(sdbp, NULL, &key, 0)) != 0)
      {
              printf("delete data error! ");
              return;
      }
      write_to_db();
      //再使用"WC42"去查找记录，就会发现找不到了
      key.data = "WC42";
      key.size = 5;
      if ((ret = dbp->get(dbp, NULL, &key, &data, 0)) != 0)
      {
              printf("get data error! \n");
              return;
      }
      struct student_record * stu = (struct student_record *)data.data;
      printf("student id: %s, last name: %s, first name: %s \n", stu->student_id, stu->last_name, stu->first_name);
}

int main()
{
      init_db();
      write_to_db();
      read_from_secondary();
      delete_from_secondary();
      return 0;
}
