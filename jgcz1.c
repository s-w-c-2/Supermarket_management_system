#include "fin.h"
void jgcz1()                                                //���Һ����м۸�������Һ���
{
    int i,n,choice,count=0;
    float j,k;
	for(i=0;i<100;i++)
    if(A[i].price!=0)
    n=i+1;                                          //��¼����Ʒ������
    printf("\n\n\n");
    printf("\t\t        ***************************************************************                   \n");
	printf("\t\t        ***********************�۸�������Ҳ���*************************                  \n\n");
	printf("\t\t        |������۸�\n");
	printf("\t\t        |�۸����ޣ�");
	scanf("%f",&j);
	printf("\t\t        |�۸����ޣ�");
	scanf("%f",&k); 
	for(i=0;i<n;i++)
	{
	    if(j<=A[i].price&&A[i].price<=k)                   //�ҳ���Ʒ�۸�������֮��������Ʒ���
	    {
	        printf("\t        ---------------------------------------------------------------------------------\n");
	        printf("\t        | ��Ʒ���\t| ��Ʒ����\t| ��Ʒ�۸�\t| ��Ʒ���\t| ��Ʒ����\t|\n");
			printf("\t        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",A[i].num,A[i].name,A[i].price,A[i].store,A[i].sale);
	        printf("\t        ---------------------------------------------------------------------------------\n");
	        count++;                                      //��count�������ϵ���Ʒ����
	    }

	}
	if(count==0)                                          //���count=0˵�������������κ���Ʒ
	{
	       printf("\t\t        *�����䲻�����κ���Ʒ�������²���\n");        //�����Ʒ��Ų����ھ�������ʾ���
           printf("\t\t        *����0���ز��ҽ���,����1����������:");
           scanf("%d",&choice);
    if(choice==0)
          search1();
    else  if(choice==1)
          screen1();
    else{
          system("cls");
			printf("\n");
			printf("\t\t        *��������,������ѡ�����Ĳ�����\n\n");
			screen1();}
	}
	else                                                  //���������ʾ��������������ʾ���
	{
	    printf("\t\t        *�����Ǽ۸�������������Ʒ\n");
        printf("\t\t        *��ѡ��������ĵĲ���������0���ز��ҽ���,����1����������:");
         
           scanf("%d",&choice);
    if(choice==0)
          search1();
    else  if(choice==1)
          screen1();
    else{
          system("cls");
			printf("\n");
			printf("\t\t        *��������,������ѡ�����Ĳ�����\n\n");
			screen1();}

	}
	system("cls");
}

