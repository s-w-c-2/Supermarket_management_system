#include "fin.h"
void screen2()                                               //�����溯��(��ͨ�û�)
{
	void search();
	void tj2();
	void save();
	int choice;
	printf("\t\t        **************************************************************                  \n ");
	printf("\t\t        **                          Welcome                         **                  \n ");
	printf("\t\t        **                      ������Ʒ����ϵͳ                    **                  \n ");
	printf("\t\t        **                                                          **                  \n ");
	printf("\t\t        **                      1.������Ʒ                          **                  \n ");
	printf("\t\t        **                      2.ͳ����Ʒ����                      **                  \n ");
	printf("\t\t        **                      0.�˳�                              **                  \n ");
	printf("\t\t        **************************************************************                  \n ");               //������
    printf("\t\t        |��ѡ�����Ĳ�����"); 
	                                                                                          //��ʾ���
	scanf("%d",&choice);
	switch(choice)                                           //��switch���ʵ�ֶ��֧ѡ��ṹ�����ò�ͬ�ĺ���
	{
	    case 1: search2();break;
		case 2: tj2();break;
		case 0:{
			save();
			printf("\n");
			printf("\t\t         *��ӭ�´ι��٣�����"); 
			exit(0);
		}
		default:{
			system("cls");
			printf("\n");
			printf("\t\t        *��������,������ѡ�����Ĳ�����\n\n");
			screen2();
		        }
	}
}


