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
    printf("\t        | ��Ʒ���\t| ��Ʒ����\t| ��Ʒ�۸�\t| ��Ʒ���\t| ��Ʒ����\t|\n");
	printf("\t        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",A[i].num,A[i].name,A[i].price,A[i].store,A[i].sale);
	printf("\t        ---------------------------------------------------------------------------------\n");
    }
    while(1)
    {
	{
    printf("\n");
	printf("\t        |��ѡ����Ҫ�������Ʒ��ţ�");
	scanf("%d",&s);
	k[j]=s-1;
	j++;
	printf("\t        |��ѡ��Ҫ�����������");
	scanf("%f",&num);
	sum+=num*A[s-1].price;
	A[s-1].store=A[s-1].store-num;
	A[s-1].sale=A[s-1].sale+num;
	}
	while(1)
	{
	printf("\n");
	printf("\t        *���Ƿ�Ҫ�������򣿣�Y/N����");
	scanf("%s",pd);
	if(strcmp(pd,"Y")==0||strcmp(pd,"N")==0)
	break;
	printf("\n");
	printf("\t        *�����������������룡\n"); 
	}
	if(strcmp(pd,"N")==0)
	break;
	if(strcmp(pd,"Y")==0)
	continue;
	}
	printf("\n");
	printf("\t        *VIP֧���밴1/��֧ͨ���밴2��");
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
    printf("\t        | ��Ʒ���\t| ��Ʒ����\t| ��Ʒ�۸�\t| ��Ʒ���\t| ��Ʒ����\t|\n");
	printf("\t        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",A[i].num,A[i].name,A[i].price,A[i].store,A[i].sale);
	printf("\t        ---------------------------------------------------------------------------------\n");
    }
	printf("\n\t        |����ѡ������Ʒ�Żݺ�ļ۸�Ϊ��%.2fԪ  (VIP�����Ż�)\n",sum*0.8);
	printf("\t        |�����Ż�%.2fԪ\n\n",sum*0.2);
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
    printf("\t        | ��Ʒ���\t| ��Ʒ����\t| ��Ʒ�۸�\t| ��Ʒ���\t| ��Ʒ����\t|\n");
	printf("\t        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",A[i].num,A[i].name,A[i].price,A[i].store,A[i].sale);
	printf("\t        ---------------------------------------------------------------------------------\n");
    }
		printf("\n\t        |����ѡ������Ʒ�ܼ�Ϊ��%.2fԪ\n\n",sum);break;
	}
	} 
	printf("\t        *����0�˳�,����1���������棺");          //���ҳɹ�����ʾ�û�����
            int choice; 
	        scanf("%d",&choice);
	        if(choice==0)
			{
			save();
			printf("\n");
			printf("\t        *��ӭ�´ι��٣�����"); 
			exit(0);					
			}                            
	        if(choice==1)                               
	        {
	        	system("cls");
	        	screen1();
				}    
}

