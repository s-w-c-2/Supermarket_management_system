#include "fin.h"
void save()
{
	FILE*fp;                                                //�����ļ�����ָ��
	if((fp=fopen("information.txt","wb"))==NULL)            //��ֻ����ʽ���ļ�������ļ����ھͽ��ļ��ĵ�ַ��fp,���������fpΪ��ָ��
	{
		printf("cannot open this file;\n");
		exit(0);
	}
	int j;
  for(j=0;j<n;j++)                                //ɾ���ļ�������������
    {
        fprintf(fp,"%s ",A[j].num);  
        fprintf(fp,"%s ",A[j].name);
        fprintf(fp,"%f ",A[j].price);
        fprintf(fp,"%d ",A[j].store);
        fprintf(fp,"%d\n",A[j].sale);
    }
  fclose(fp);
}


void save1()
{
	FILE*fp;                                                //�����ļ�����ָ��
	if((fp=fopen("password.txt","wb"))==NULL)            //��ֻ����ʽ���ļ�������ļ����ھͽ��ļ��ĵ�ַ��fp,���������fpΪ��ָ��
	{
		printf("cannot open this file;\n");
		exit(0);
	}
	int j;
  for(j=0;j<100;j++)                                //ɾ���ļ�������������
    {
        fprintf(fp,"%s ",B[j].yhm);  
        fprintf(fp,"%s \n",B[j].mm);
    }
  fclose(fp);
}
