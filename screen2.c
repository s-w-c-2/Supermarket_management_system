#include "fin.h"
void screen2()                                               //主界面函数(普通用户)
{
	void search();
	void tj2();
	void save();
	int choice;
	printf("\t\t        **************************************************************                  \n ");
	printf("\t\t        **                          Welcome                         **                  \n ");
	printf("\t\t        **                      超市商品管理系统                    **                  \n ");
	printf("\t\t        **                                                          **                  \n ");
	printf("\t\t        **                      1.查找商品                          **                  \n ");
	printf("\t\t        **                      2.统计商品总数                      **                  \n ");
	printf("\t\t        **                      0.退出                              **                  \n ");
	printf("\t\t        **************************************************************                  \n ");               //主界面
    printf("\t\t        |请选择您的操作："); 
	                                                                                          //提示语句
	scanf("%d",&choice);
	switch(choice)                                           //用switch语句实现多分支选择结构来调用不同的函数
	{
	    case 1: search2();break;
		case 2: tj2();break;
		case 0:{
			save();
			printf("\n");
			printf("\t\t         *欢迎下次光临！！！"); 
			exit(0);
		}
		default:{
			system("cls");
			printf("\n");
			printf("\t\t        *操作错误,请重新选择您的操作！\n\n");
			screen2();
		        }
	}
}


