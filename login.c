#include "fin.h"
int login()
{
	char S1[100]={0},S2[100]={0};
	int i=0,j=0,a; 
	FILE*fp;                                               //�����ļ�����ָ��
	if((fp=fopen("password.txt","r"))==NULL)               //��ֻ����ʽ���ļ�������ļ����ھͽ��ļ��ĵ�ַ��fp,���������fpΪ��ָ��
	{
		printf("cannot open this file;\n");
		exit(0);
	}
	while(!feof(fp))                                      //feof����������������ļ���дλ���Ƿ��Ƶ��ļ���ĩβ������ǣ�����ֵΪ1������Ϊ0
	{
	fscanf(fp,"%s\n",B[i].yhm);  //�û��� 
	fscanf(fp,"%s\n",B[i].mm);   //����                   //��fscanf�������ļ��ж�ȡ���뵽�ṹ�������
    i++;
	}
	n=i;
	fclose(fp);                                           //�ر��ļ���������     
	system("color 03");
	printf("\n");Sleep(50);
	printf("\t\t          __________________________________________________________________\n");Sleep(50);
	printf("\t\t         | _______________________________________________________________  |\n");Sleep(50);
	printf("\t\t         | |**************************************************************| |\n");Sleep(50);
	printf("\t\t         | |**                                                          **| | \n");Sleep(50);
	printf("\t\t         | |**            ��     ��     ��     ��     ¼                **| | \n");Sleep(50);
	printf("\t\t         | |**                                                          **| | \n");Sleep(50);
	printf("\t\t         | |**************************************************************| | \n");Sleep(50);
	printf("\t\t         | |______________________________________________________________| | \n");Sleep(50);
	printf("\t\t         |__________________________________________________________________|\n\n");Sleep(50);
	for(i=0;i<3;i++)
	{
		printf("\t\t          |�������û�����");
		gets(S1);
		printf("\t\t          |�������¼���룺");
		gets(S2);
		for(j=0;j<10;j++)
		{
			if((strcmp(S1,B[j].yhm)==0)&&(strcmp(S2,B[j].mm)==0)&&(strcmp(S1,"\0")!=0)&&(strcmp(S2,"\0")!=0))
		  {
		  	system("cls");
		  	printf("\n");Sleep(50);
		  	printf("\t\t        --------------------------------------------------------------\n");Sleep(50);
			printf("\t\t        ----------------------������ȷ����ӭʹ��----------------------\n");Sleep(50);
			printf("\t\t        --------------------------------------------------------------\n");Sleep(50);
			j=0;
			break;
		  }
		}
		if(j==0)
		break;
		else
		printf("\n");
		printf("\t\t          *�û������������,�㻹��%d�λ��ᣡ\n\n",2-i);
	}
		if(i==3)
		{
			printf("\n");
			printf("\t\t          *��������������Σ�ϵͳ�Զ��˳�!");
			exit(0); 
        } 
        system("color 02");
    if(strcmp(S1,"gly")==0)
    a=1;
    else
    a=2;
    return a;
}