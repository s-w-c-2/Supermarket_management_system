#include "fin.h"
void jk()
{
	void save();
   int i,q,num,n;
   int k=-1;

	system("cls");
	while(1)
	{
	printf("\n");
	printf("\t\t\t\t     ---------------------------------------------\n");
	printf("\t\t\t\t     -----------------商品进库--------------------\n");
	printf("\t\t\t\t     ---------------------------------------------\n\n");
	printf("\t\t\t\t     |请输入商品编号：");
	scanf("%d",&q);
	q=q-1;
	{
    printf("\n");
    printf("\t        ---------------------------------------------------------------------------------\n");
	printf("\t        | 商品编号\t| 商品名称\t| 商品价格\t| 商品库存\t| 商品已售\t|\n");
	printf("\t        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",A[q].num,A[q].name,A[q].price,A[q].store,A[q].sale);
    printf("\t        ---------------------------------------------------------------------------------\n\n");
    printf("\t\t\t\t     *请确认商品编号：");
    scanf("%d",&num);
    num=num-1;
    }
    if(q==num)
    {
    	printf("\t\t\t\t     *请输入进货数量：");
    	scanf("%d",&n);
    	A[q].store=A[q].store+n;
    	break;
	}
	else
	{
		system("cls");
		printf("\n\n");
		printf("\t\t\t\t     *两次编号不一致请重新输入！\n\n");
	}
    }
    system("cls");
    printf("\n");
    printf("\t\t     -----------------------------------------------------------------------\n");
	printf("\t\t     -------------------商品进库成功，请选择下一步操作----------------------\n");
	printf("\t\t     -----------------------------------------------------------------------\n\n");
    

    save(); 
 } 

