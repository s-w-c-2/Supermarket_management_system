#include "fin.h"
void screen1()                                              //�����溯��(����Ա)
{
	void sy();
	void add();
	void Del();
	void change();
	void search();
	void tj1();
	void save();
	void jk();
	int choice;
	void save1();
	system("color A");Sleep(50);
	printf("\n\n\n");
	printf("\t\t        **************************************************************                  \n ");Sleep(50);
	printf("\t\t        **                          Welcome                         **                  \n ");Sleep(50);
	printf("\t\t        **                      ������Ʒ����ϵͳ                    **                  \n ");Sleep(50);
	printf("\t\t        **                                                          **                  \n ");Sleep(50);
	printf("\t\t        **                      1.������Ʒ                          **                  \n ");Sleep(50);
	printf("\t\t        **                      2.ɾ����Ʒ                          **                  \n ");Sleep(50);
	printf("\t\t        **                      3.������Ʒ                          **                  \n ");Sleep(50);
	printf("\t\t        **                      4.�޸����롡������������������������**                  \n ");Sleep(50);
	printf("\t\t        **                      5.ͳ����Ʒ����                      **                  \n ");Sleep(50);
	printf("\t\t        **                      6.����                              **                   \n");Sleep(50);
    printf("\t\t        **                      7.���Ԥ��                          **                  \n ");Sleep(50);
    printf("\t\t        **                      8.��Ʒ����                          **                  \n ");Sleep(50);
	printf("\t\t        **                      0.�˳�                              **                  \n ");Sleep(50);
	printf("\t\t        **************************************************************                  \n\n ");Sleep(50);               //������
    printf("\t\t        |��ѡ�����Ĳ�����"); 
	                                                                                         //��ʾ���
	scanf("%d",&choice);
	switch(choice)                                          //��switch���ʵ�ֶ��֧ѡ��ṹ�����ò�ͬ�ĺ���
	{
	    case 1: add(); break;
	    case 2: Del(); break;
	    case 3: search1();break;
		case 4: change();break;
		case 5: tj1();break;
	    case 6: sy();break;
	    case 7: yj();break;
	    case 8: jk();break;
		case 0: {
			save();
			printf("\n");
			printf("\t\t         *��ӭ�´ι��٣�����"); 
			exit(0);
		}
		default:{
			system("cls");
			printf("\n");
			printf("\t\t        *��������,������ѡ�����Ĳ�����\n\n");
			screen1();
		        }
	}
}
