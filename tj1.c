#include "fin.h"
void tj1()
{
	int i,j,choice;
	char s[100]={0};
	system("cls");
	for(i=0;i<100;i++)
	C[i]=A[i];
	printf("\n\n\n");  
	printf("\t\t        **************************************************************                  \n ");
	printf("\t\t        ***********************统计商品总数操作***********************                  \n ");
	printf("\t\t        **                      1.价格升序统计                      **                  \n ");
	printf("\t\t        **                      2.价格降序统计                      **                  \n ");
	printf("\t\t        **                      3.编号升序统计                      **                  \n ");
	printf("\t\t        **                      4.库存升序统计　　　　　　　　　　　**                  \n ");
	printf("\t\t        **                      5.库存降序统计                      **                  \n ");
	printf("\t\t        **                      6.销量升序统计                      **                   \n");
    printf("\t\t        **                      7.销量降序统计                      **                  \n ");
	printf("\t\t        **                      0.返回主界面                        **                  \n ");
	printf("\t\t        **************************************************************                  \n\n ");               //主界面
    printf("\t\t        |请选择您的操作："); 
	                                                                                         //提示语句
	scanf("%d",&choice);
	system("cls");
	switch(choice)                                          //用switch语句实现多分支选择结构来调用不同的函数
	{
	    case 1: {
			for(j=0;j<100;j++)
	    	for(i=0;i<100-j;i++)
	    	if(C[i].price>C[i+1].price)
	    	{
	    		tem=C[i];
	    		C[i]=C[i+1];
	    		C[i+1]=tem;
			}
			for(i=0;i<100;i++)
	{
			if(strcmp(C[i].num,"\0")==0);
			else
			{
    printf("\t        ---------------------------------------------------------------------------------\n");
    printf("\t        | 商品编号\t| 商品名称\t| 商品价格\t| 商品库存\t| 商品已售\t|\n");
	printf("\t        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",C[i].num,C[i].name,C[i].price,C[i].store,C[i].sale);
	printf("\t        ---------------------------------------------------------------------------------\n");
	        }
    }
		}break;
		
		
	    case 2:for(j=0;j<100;j++)
	    	for(i=0;i<100-j;i++)
	    	if(C[i].price<C[i+1].price)
	    	{
	    		tem=C[i];
	    		C[i]=C[i+1];
	    		C[i+1]=tem;
			}
			for(i=0;i<100;i++)
	{
			if(strcmp(C[i].num,"\0")==0)
			break;
			{
    printf("\t        ---------------------------------------------------------------------------------\n");
    printf("\t        | 商品编号\t| 商品名称\t| 商品价格\t| 商品库存\t| 商品已售\t|\n");
	printf("\t        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",C[i].num,C[i].name,C[i].price,C[i].store,C[i].sale);
	printf("\t        ---------------------------------------------------------------------------------\n");
	        }
    }break;
    
    
	    case 3:
			for(i=0;i<100;i++)
	{
			if(strcmp(C[i].num,"\0")==0)
			break;
			{
    printf("\t        ---------------------------------------------------------------------------------\n");
    printf("\t        | 商品编号\t| 商品名称\t| 商品价格\t| 商品库存\t| 商品已售\t|\n");
	printf("\t        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",C[i].num,C[i].name,C[i].price,C[i].store,C[i].sale);
	printf("\t        ---------------------------------------------------------------------------------\n");
	        }
    }break;
    
    
		case 4: {
			for(j=0;j<100;j++)
	    	for(i=0;i<100-j;i++)
	    	if(C[i].store>C[i+1].store)
	    	{
	    		tem=C[i];
	    		C[i]=C[i+1];
	    		C[i+1]=tem;
			}
			for(i=0;i<100;i++)
	{
			if(strcmp(C[i].num,"\0")==0);
			else
			{
    printf("\t        ---------------------------------------------------------------------------------\n");
    printf("\t        | 商品编号\t| 商品名称\t| 商品价格\t| 商品库存\t| 商品已售\t|\n");
	printf("\t        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",C[i].num,C[i].name,C[i].price,C[i].store,C[i].sale);
	printf("\t        ---------------------------------------------------------------------------------\n");
	        }
    }
		}break;
    
    
		case 5: for(j=0;j<100;j++)
	    	for(i=0;i<100-j;i++)
	    	if(C[i].store<C[i+1].store)
	    	{
	    		tem=C[i];
	    		C[i]=C[i+1];
	    		C[i+1]=tem;
			}
			for(i=0;i<100;i++)
	{
			if(strcmp(C[i].num,"\0")==0)
			break;
			{
    printf("\t        ---------------------------------------------------------------------------------\n");
    printf("\t        | 商品编号\t| 商品名称\t| 商品价格\t| 商品库存\t| 商品已售\t|\n");
	printf("\t        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",C[i].num,C[i].name,C[i].price,C[i].store,C[i].sale);
	printf("\t        ---------------------------------------------------------------------------------\n");
	        }
    }break;
    
    
	    case 6:{
			for(j=0;j<100;j++)
	    	for(i=0;i<100-j;i++)
	    	if(C[i].sale>C[i+1].sale)
	    	{
	    		tem=C[i];
	    		C[i]=C[i+1];
	    		C[i+1]=tem;
			}
			for(i=0;i<100;i++)
	{
			if(strcmp(C[i].num,"\0")==0);
			else
			{
    printf("\t        ---------------------------------------------------------------------------------\n");
    printf("\t        | 商品编号\t| 商品名称\t| 商品价格\t| 商品库存\t| 商品已售\t|\n");
	printf("\t        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",C[i].num,C[i].name,C[i].price,C[i].store,C[i].sale);
	printf("\t        ---------------------------------------------------------------------------------\n");
	        }
    }
		}break;
		
		
	    case 7:for(j=0;j<100;j++)
	    	for(i=0;i<100-j;i++)
	    	if(C[i].sale<C[i+1].sale)
	    	{
	    		tem=C[i];
	    		C[i]=C[i+1];
	    		C[i+1]=tem;
			}
			for(i=0;i<100;i++)
	{
			if(strcmp(C[i].num,"\0")==0)
			break;
			{
    printf("\t        ---------------------------------------------------------------------------------\n");
    printf("\t        | 商品编号\t| 商品名称\t| 商品价格\t| 商品库存\t| 商品已售\t|\n");
	printf("\t        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",C[i].num,C[i].name,C[i].price,C[i].store,C[i].sale);
	printf("\t        ---------------------------------------------------------------------------------\n");
	        }
    }break;
    
    
		case 0: 
		{
			system("cls");
			screen1();
		}break;
		default: tj1();
	}
}

