#include "fin.h"
void bhcz1()                                                //查找函数中编号查找函数
{
    int i,choice,count=0;
    char num[100];
    printf("\n\n\n");
    printf("\t\t        ***************************************************************                   \n");
	printf("\t\t        *************************编号查找操作**************************                    \n");
    printf("\t\t        |请输入商品编号：");
    
    scanf("%s",num);
    printf("\n");
    for(i=0;i<100;i++)
    {
	    if(strcmp(num,A[i].num)==0)                     //如果相同就输出该商品的所有信息
	    {
	        printf("\t        ---------------------------------------------------------------------------------\n");
	        printf("\t        | 商品编号\t| 商品名称\t| 商品价格\t| 商品库存\t| 商品已售\t|\n");
			printf("\t        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",A[i].num,A[i].name,A[i].price,A[i].store,A[i].sale);
	        printf("\t        ---------------------------------------------------------------------------------\n");
			count++;
			break;}
		}
		if(count==0)
			printf("\t\t        *此商品不存在，请重新查找!\n");
            printf("\t\t        *输入0返回查找界面,输入1返回主界面：");//查找成功后，提示用户操作
             
	        scanf("%d",&choice);
	        if(choice==0)
	        search1();                                       //如果choice=0就再次调用名称查找函数
	        else if(choice==1)                            //如果choice=1就调用主界面函数
	        screen1();
	        else
	        {
	            system("cls");
			printf("\n");
			printf("\t\t        *操作错误,请重新选择您的操作！\n\n");
			screen1();
	        }
	        system("cls");
}

