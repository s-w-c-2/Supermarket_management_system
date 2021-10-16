#include "fin.h"
void search1()                                              //查找商品函数
{
    int choice;
    void mccz();
    void bhcz();
    void jgcz();
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t        ***************************************************************                   \n");
	printf("\t\t        *************************查询商品操作**************************                    \n");
	printf("\t\t        **                                                           **                    \n");
	printf("\t\t        **                   1.按照商品编号查找                      **                    \n");
	printf("\t\t        **                   2.按照商品名称查找                      **                    \n");
	printf("\t\t        **                   3.按照价格区间查找                      **                    \n");
	printf("\t\t        **                   4.返回主界面                            **                    \n");
	printf("\t\t        ***************************************************************                    \n\n");           //查找商品操作主界面
	printf("\t\t        |请输入您的操作：");
	 
	scanf("%d",&choice);
	system("cls");
	switch(choice)                                        //Switch语句实现函数选择
	{
	    case 1:bhcz1();break;
	    case 2:mccz1();break;
	    case 3:jgcz1();break;
	    case 4:screen1();break;
	    default:{
			system("cls");
			printf("\n");
			printf("\t\t        *操作错误,请重新选择您的操作！\n\n");
			screen1();
		        }

	}
}

