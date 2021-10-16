#include "fin.h"
void sy()
{
	void save();
	int i,j=0,s,t,k[100];
	float num,sum=0;
	char pd[100]={0};
		system("cls");
	for(i=0;i<100;i++)
	{
			if(strcmp(A[i].num,"\0")==0)
			break;
    printf("\t        ---------------------------------------------------------------------------------\n");
    printf("\t        | 商品编号\t| 商品名称\t| 商品价格\t| 商品库存\t| 商品已售\t|\n");
	printf("\t        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",A[i].num,A[i].name,A[i].price,A[i].store,A[i].sale);
	printf("\t        ---------------------------------------------------------------------------------\n");
    }
    while(1)
    {
	{
    printf("\n");
	printf("\t        |请选择您要购买的商品编号：");
	scanf("%d",&s);
	k[j]=s-1;
	j++;
	printf("\t        |请选择要购买的数量：");
	scanf("%f",&num);
	sum+=num*A[s-1].price;
	A[s-1].store=A[s-1].store-num;
	A[s-1].sale=A[s-1].sale+num;
	}
	while(1)
	{
	printf("\n");
	printf("\t        *您是否要继续购买？（Y/N）：");
	scanf("%s",pd);
	if(strcmp(pd,"Y")==0||strcmp(pd,"N")==0)
	break;
	printf("\n");
	printf("\t        *操作错误，请重新输入！\n"); 
	}
	if(strcmp(pd,"N")==0)
	break;
	if(strcmp(pd,"Y")==0)
	continue;
	}
	printf("\n");
	printf("\t        *VIP支付请按1/普通支付请按2：");
	scanf("%d",&t);
	switch(t)
	{
	case 1:
	{
	printf("\n");
	for(j=0;j<100;j++)
	{
		i=k[j];
			if(k[j]==0)
			break;
    printf("\t        ---------------------------------------------------------------------------------\n");
    printf("\t        | 商品编号\t| 商品名称\t| 商品价格\t| 商品库存\t| 商品已售\t|\n");
	printf("\t        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",A[i].num,A[i].name,A[i].price,A[i].store,A[i].sale);
	printf("\t        ---------------------------------------------------------------------------------\n");
    }
	printf("\n\t        |您所选购的商品优惠后的价格为：%.2f元  (VIP八折优惠)\n",sum*0.8);
	printf("\t        |本次优惠%.2f元\n\n",sum*0.2);
    }
	break; 
	case 2:
	{
		printf("\n");
	for(j=0;j<100;j++)
	{
		i=k[j];
			if(k[j]==0)
			break;
    printf("\t        ---------------------------------------------------------------------------------\n");
    printf("\t        | 商品编号\t| 商品名称\t| 商品价格\t| 商品库存\t| 商品已售\t|\n");
	printf("\t        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",A[i].num,A[i].name,A[i].price,A[i].store,A[i].sale);
	printf("\t        ---------------------------------------------------------------------------------\n");
    }
		printf("\n\t        |您所选购的商品总价为：%.2f元\n\n",sum);break;
	}
	} 
	printf("\t        *输入0退出,输入1返回主界面：");          //查找成功后，提示用户操作
            int choice; 
	        scanf("%d",&choice);
	        if(choice==0)
			{
			save();
			printf("\n");
			printf("\t        *欢迎下次光临！！！"); 
			exit(0);					
			}                            
	        if(choice==1)                               
	        {
	        	system("cls");
	        	screen1();
				}    
}

