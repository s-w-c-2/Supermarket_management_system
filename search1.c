#include "fin.h"
void search1()                                              //������Ʒ����
{
    int choice;
    void mccz();
    void bhcz();
    void jgcz();
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t        ***************************************************************                   \n");
	printf("\t\t        *************************��ѯ��Ʒ����**************************                    \n");
	printf("\t\t        **                                                           **                    \n");
	printf("\t\t        **                   1.������Ʒ��Ų���                      **                    \n");
	printf("\t\t        **                   2.������Ʒ���Ʋ���                      **                    \n");
	printf("\t\t        **                   3.���ռ۸��������                      **                    \n");
	printf("\t\t        **                   4.����������                            **                    \n");
	printf("\t\t        ***************************************************************                    \n\n");           //������Ʒ����������
	printf("\t\t        |���������Ĳ�����");
	 
	scanf("%d",&choice);
	system("cls");
	switch(choice)                                        //Switch���ʵ�ֺ���ѡ��
	{
	    case 1:bhcz1();break;
	    case 2:mccz1();break;
	    case 3:jgcz1();break;
	    case 4:screen1();break;
	    default:{
			system("cls");
			printf("\n");
			printf("\t\t        *��������,������ѡ�����Ĳ�����\n\n");
			screen1();
		        }

	}
}

