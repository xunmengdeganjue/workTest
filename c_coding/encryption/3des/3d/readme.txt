�ļ�˵����
des.c des.h �㷨
des_start.c �������
in.txt �����ļ�
key.txt ��Կ�ļ� 24�ַ�

�ӿ�˵����
//DES�㷨
int DES_Encrypt(ElemType *plainBuffer, ElemType *keyBuffer, ElemType *cipherBuffer, int n);//�������� 
int DES_Decrypt(ElemType *cipherBuffer, ElemType *keyBuffer, ElemType *plainBuffer, int n);//�������� 
int DES_Encrypt_File(char *plainFile, char *keyStr,char *cipherFile);//�����ļ�  
int DES_Decrypt_File(char *cipherFile, char *keyStr,char *plainFile);//�����ļ� 
//3DES�㷨
int D3DES_Encrypt(ElemType *plainBuffer, ElemType *keyBuffer, ElemType *cipherBuffer, int n);//�������� 
int D3DES_Decrypt(ElemType *cipherBuffer, ElemType *keyBuffer, ElemType *plainBuffer, int n);//�������� 
int D3DES_Encrypt_File(char *plainFile, char *keyStr,char *cipherFile);//�����ļ�  
int D3DES_Decrypt_File(char *cipherFile, char *keyStr,char *plainFile);//�����ļ� 

������DESΪ1���㷨��ʹ��ǰ8�ֽ���Ϊ������Կ��3DESΪ��ǿ���3�ؼ��ܣ���ʹ��3��8�ֽ���Կ���ܣ��൱���ӳ�Ϊ24�ֽڡ�