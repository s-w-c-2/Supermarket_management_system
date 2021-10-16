#include "fin.h"
void screen1()                                              //主界面函数(管理员)
{
	void sy();
	void add();
	void Del();
	void change();
	void search();
	void tj1();
	void save();
	void jk();
	int choice;
	void save1();
	system("color A");Sleep(50);
	printf("\n\n\n");
	printf("\t\t        **************************************************************                  \n ");Sleep(50);
	printf("\t\t        **                          Welcome                         **                  \n ");Sleep(50);
	printf("\t\t        **                      超市商品管理系统                    **                  \n ");Sleep(50);
	printf("\t\t        **                                                          **                  \n ");Sleep(50);
	printf("\t\t        **                      1.增加商品                          **                  \n ");Sleep(50);
	printf("\t\t        **                      2.删除商品                          **                  \n ");Sleep(50);
	printf("\t\t        **                      3.查找商品                          **                  \n ");Sleep(50);
	printf("\t\t        **                      4.修改密码　　　　　　　　　　　　　**                  \n ");Sleep(50);
	printf("\t\t        **                      5.统计商品总数                      **                  \n ");Sleep(50);
	printf("\t\t        **                      6.收银                              **                   \n");Sleep(50);
    printf("\t\t        **                      7.库存预警                          **                  \n ");Sleep(50);
    printf("\t\t        **                      8.商品进库                          **                  \n ");Sleep(50);
	printf("\t\t        **                      0.退出                              **                  \n ");Sleep(50);
	printf("\t\t        **************************************************************                  \n\n ");Sleep(50);               //主界面
    printf("\t\t        |请选择您的操作："); 
	                                                                                         //提示语句
	scanf("%d",&choice);
	switch(choice)                                          //用switch语句实现多分支选择结构来调用不同的函数
	{
	    case 1: add(); break;
	    case 2: Del(); break;
	    case 3: search1();break;
		case 4: change();break;
		case 5: tj1();break;
	    case 6: sy();break;
	    case 7: yj();break;
	    case 8: jk();break;
		case 0: {
			save();
			printf("\n");
			printf("\t\t         *欢迎下次光临！！！"); 
			exit(0);
		}
		default:{
			system("cls");
			printf("\n");
			printf("\t\t        *操作错误,请重新选择您的操作！\n\n");
			screen1();
		        }
	}
}
