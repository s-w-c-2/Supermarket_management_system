#include<stdio.h>
#include<string.h>
#include<conio.h>                                           //对屏幕操作的头文件
#include<stdlib.h>
#include<windows.h>
    void information();                                     //输入信息函数声明
    void screen1();                                         //主界面函数声明            （管理员） 
    void screen2();                                         //主界面函数声明            （普通用户） 
    void add();                                             //增加函数声明
	void search1();                                         //查找函数声明              （管理员） 
	void search2();                                         //查找函数声明              （普通用户） 
    void mccz1();                                           //查找函数中名称查找函数声明（管理员） 
    void mccz2();                                           //查找函数中名称查找函数声明（普通用户） 
    void bhcz1();                                           //查找函数中编号查找函数声明（管理员） 
    void bhcz2();                                           //查找函数中编号查找函数声明（普通用户）
    void jgcz1();                                           //查找函数中价格函数查找声明（管理员） 
    void jgcz2();                                           //查找函数中价格函数查找声明（普通用户） 
    void Del();                                             //删除函数声明   
     int login();                                            //登录函数声明 
    void sy();
    void yj();
    void tj1();
    void tj2();
    void jk();
struct goods                                                //定义结构体变量 商品信息
{
	char  num[100];                                         //商品编号
    char  name[100];                                        //商品名称
	float price;                                            //商品价格
	int   store;                                            //商品库存
	int   sale;                                             //商品已经销售数量
}A[100],C[100],tem;
struct yhdl                                                 //定义结构体变量 登陆信息 
{
	char yhm[100];                                          //用户名 
	char mm[100];                                           //登录密码 
}B[100];
static n=0;
static m=0;
