#include "fin.h"
void yj()
{
	void save();
	int num,a,i;
	system("cls");
	printf("\n\n");
	system("color 04");
	printf("        ------------------------------------------------------------------------------------------------------------\n");
	printf("        ------------------------------------------------------------------------------------------------------------\n\n"); 
	printf("        *请设置商品预警数量：");
	scanf("%d",&num);
	for(i=0;i<100;i++)
	{
		if(strcmp(A[i].num,"\0")==0)
		break;
		if(A[i].store<num)
		{
    printf("        ---------------------------------------------------------------------------------\n");Sleep(100); 
    printf("        | 商品编号\t| 商品名称\t| 商品价格\t| 商品库存\t| 商品已售\t|\n");Sleep(100);
	printf("        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",A[i].num,A[i].name,A[i].price,A[i].store,A[i].sale);Sleep(100);
	printf("        ---------------------------------------------------------------------------------\n");Sleep(100);
        }
    }
    printf("\n");
    printf("        *以上商品库存低于预警值！\n\n");
    printf("        *输入0退出,输入1返回主界面：");          //查找成功后，提示用户操作
            int choice; 
	        scanf("%d",&choice);
	        if(choice==0)
			{
			save();
			printf("\n");
			printf("        *欢迎下次光临！！！"); 
			exit(0);					
			}                            
	        if(choice==1)                               
	        {
	        	system("cls");
	        	screen1();
				}    
}


