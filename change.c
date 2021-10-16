#include "fin.h"
void change()                                               //修改密码 
{
   void save1();
   int i;
   char ym[100]={0},xm1[100],xm2[100];

	system("cls");
	printf("\n");
	printf("\t\t\t\t     ---------------------------------------------\n");
	printf("\t\t\t\t     -----------------修改密码--------------------\n");
	printf("\t\t\t\t     ---------------------------------------------\n\n");
	while(1)
	{
		printf("\t\t\t\t     |请输入原密码：");
		scanf("%s",ym);
		if(strcmp(B[0].mm,ym)==0&&strcmp(ym,"\0")!=0)
		{
			printf("\n\t\t\t\t     *密码正确！\n");
			printf("\n\t\t\t\t     |请输入新密码：");
			scanf("%s",xm1);
			printf("\n\t\t\t\t     |请确认新密码：");
			scanf("%s",xm2);
			if(strcmp(xm1,xm2)==0&&strcmp(xm1,"\0")!=0)
			{
				break;
			}
			else
			{
				printf("\n\t\t\t\t     *两次密码不一致，请重新输入！\n\n");
			}
		}
	    else
	    {
	    	printf("\n\t\t\t\t     *密码错误！\n\n");
		}
	}
	strcpy(B[0].mm,xm1);
	    system("cls");
    printf("\n");
    printf("\t\t   -----------------------------------------------------------------------\n");
	printf("\t\t   --------------------密码修改成功，请选择下一步操作---------------------\n");
	printf("\t\t   -----------------------------------------------------------------------\n\n");
	
	save1();
}

