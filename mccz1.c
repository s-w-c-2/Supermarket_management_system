#include "fin.h"
void mccz1()                                                //��ѯ��Ʒ���������Ʋ��Һ���
	{
	    int i,choice,count=0;
	    char ming[100];
	    printf("\n\n\n");
	    printf("\t\t        ****************************************************************                   \n");
	    printf("\t\t        *************************���Ʋ��Ҳ�������***********************                   \n\n");
	    printf("\t\t        |��������Ʒ���ƣ�");
	     
	    scanf("%s",ming);
	    for(i=0;i<100;i++)                                //for���������Ա��������Ʒ���ƺ�ϵͳ�����������Ʒ�����Ƿ���ͬ
		{
	    if(strcmp(ming,A[i].name)==0)                     //�����ͬ���������Ʒ��������Ϣ
	    {
	        printf("\t        ---------------------------------------------------------------------------------\n");
	        printf("\t        | ��Ʒ���\t| ��Ʒ����\t| ��Ʒ�۸�\t| ��Ʒ���\t| ��Ʒ����\t|\n");
			printf("\t        | %s\t        | %s\t| %.2f\t        | %d\t        | %d\t        |\n",A[i].num,A[i].name,A[i].price,A[i].store,A[i].sale);
	        printf("\t        ---------------------------------------------------------------------------------\n");
			count++;
			break;}
		}
		if(count==0)
			printf("\t\t        *����Ʒ�����ڣ������²���!\n");
            printf("\t\t        *����0���ز��ҽ���,����1���������棺");//���ҳɹ�����ʾ�û�����
             
	        scanf("%d",&choice);
	        if(choice==0)
	        search1();                                       //���choice=0���ٴε������Ʋ��Һ���
	        else if(choice==1)                            //���choice=1�͵��������溯��
	        screen1();
	        else
	        {
			system("cls");
			printf("\n");
			printf("\t\t        *��������,������ѡ�����Ĳ�����\n\n");
			screen1();
	        }
	    system("cls");    

	    }