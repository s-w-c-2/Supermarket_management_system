#include "fin.h"
void information()                                          //�ú��������ļ��ж�ȡ��Ϣ
{
	int i=0;
	FILE*fp;                                                //�����ļ�����ָ��
	if((fp=fopen("information.txt","r"))==NULL)             //��ֻ����ʽ���ļ�������ļ����ھͽ��ļ��ĵ�ַ��fp,���������fpΪ��ָ��
	{
		printf("cannot open this file;\n");
		exit(0);
	}
	while(!feof(fp))                                        //feof����������������ļ���дλ���Ƿ��Ƶ��ļ���ĩβ������ǣ�����ֵΪ1������Ϊ0
	{
	fscanf(fp,"%s\n",A[i].num);  //��Ʒ���
	fscanf(fp,"%s\n",A[i].name);//��Ʒ����
	fscanf(fp,"%f\n",&A[i].price);//��Ʒ�۸�
	fscanf(fp,"%d\n",&A[i].store);//��Ʒ���
	fscanf(fp,"%d\n",&A[i].sale); //��Ʒ����                //��fscanf�������ļ��ж�ȡ���뵽�ṹ�������
    i++;
	}
	n=i;
	fclose(fp);                                             //�ر��ļ����ⱻ����
}

