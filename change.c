#include "fin.h"
void change()                                               //�޸����� 
{
   void save1();
   int i;
   char ym[100]={0},xm1[100],xm2[100];

	system("cls");
	printf("\n");
	printf("\t\t\t\t     ---------------------------------------------\n");
	printf("\t\t\t\t     -----------------�޸�����--------------------\n");
	printf("\t\t\t\t     ---------------------------------------------\n\n");
	while(1)
	{
		printf("\t\t\t\t     |������ԭ���룺");
		scanf("%s",ym);
		if(strcmp(B[0].mm,ym)==0&&strcmp(ym,"\0")!=0)
		{
			printf("\n\t\t\t\t     *������ȷ��\n");
			printf("\n\t\t\t\t     |�����������룺");
			scanf("%s",xm1);
			printf("\n\t\t\t\t     |��ȷ�������룺");
			scanf("%s",xm2);
			if(strcmp(xm1,xm2)==0&&strcmp(xm1,"\0")!=0)
			{
				break;
			}
			else
			{
				printf("\n\t\t\t\t     *�������벻һ�£����������룡\n\n");
			}
		}
	    else
	    {
	    	printf("\n\t\t\t\t     *�������\n\n");
		}
	}
	strcpy(B[0].mm,xm1);
	    system("cls");
    printf("\n");
    printf("\t\t   -----------------------------------------------------------------------\n");
	printf("\t\t   --------------------�����޸ĳɹ�����ѡ����һ������---------------------\n");
	printf("\t\t   -----------------------------------------------------------------------\n\n");
	
	save1();
}

