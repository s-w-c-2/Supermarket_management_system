#include "fin.h"
void jgcz1()                                                //查找函数中价格区间查找函数
{
    int i,n,choice,count=0;
    float j,k;
	for(i=0;i<100;i++)
    if(A[i].price!=0)
    n=i+1;                                          //记录下商品的总数
    printf("\n\n\n");
    printf("\t\t        ***************************************************************                   \n");
	printf("\t\t        ***********************价格区间查找操作*************************                  \n\n");
	printf("\t\t        |请输入价格\n");
	printf("\t\t        |价格下限：");
	scanf("%f",&j);
	printf("\t\t        |价格上限：");
	scanf("%f",&k); 
	for(i=0;i<n;i++)
	{
	    if(j<=A[i].price&&A[i].price<=k)                   //找出商品价格在区间之内所有商品输出
	    {
	        printf("\t        ---------------------------------------------------------------------------------\n");
	        printf("\t        | 商品编号\t| 商品名称\t| 商品价格\t| 商品库存\t| 商品已售\t|\n");
			printf("\t        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",A[i].num,A[i].name,A[i].price,A[i].store,A[i].sale);
	        printf("\t        ---------------------------------------------------------------------------------\n");
	        count++;                                      //用count区间内上的商品总数
	    }

	}
	if(count==0)                                          //如果count=0说明此区间内无任何商品
	{
	       printf("\t\t        *此区间不存在任何商品，请重新查找\n");        //如果商品编号不存在就输入提示语句
           printf("\t\t        *输入0返回查找界面,输入1返回主界面:");
           scanf("%d",&choice);
    if(choice==0)
          search1();
    else  if(choice==1)
          screen1();
    else{
          system("cls");
			printf("\n");
			printf("\t\t        *操作错误,请重新选择您的操作！\n\n");
			screen1();}
	}
	else                                                  //否则输出提示接下来操作的提示语句
	{
	    printf("\t\t        *以上是价格区间内所有商品\n");
        printf("\t\t        *请选择接下来的的操作，输入0返回查找界面,输入1返回主界面:");
         
           scanf("%d",&choice);
    if(choice==0)
          search1();
    else  if(choice==1)
          screen1();
    else{
          system("cls");
			printf("\n");
			printf("\t\t        *操作错误,请重新选择您的操作！\n\n");
			screen1();}

	}
	system("cls");
}

