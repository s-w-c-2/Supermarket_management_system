#include<stdio.h>
#include<string.h>
#include<conio.h>                                           //����Ļ������ͷ�ļ�
#include<stdlib.h>
#include<windows.h>
    void information();                                     //������Ϣ��������
    void screen1();                                         //�����溯������            ������Ա�� 
    void screen2();                                         //�����溯������            ����ͨ�û��� 
    void add();                                             //���Ӻ�������
	void search1();                                         //���Һ�������              ������Ա�� 
	void search2();                                         //���Һ�������              ����ͨ�û��� 
    void mccz1();                                           //���Һ��������Ʋ��Һ�������������Ա�� 
    void mccz2();                                           //���Һ��������Ʋ��Һ�����������ͨ�û��� 
    void bhcz1();                                           //���Һ����б�Ų��Һ�������������Ա�� 
    void bhcz2();                                           //���Һ����б�Ų��Һ�����������ͨ�û���
    void jgcz1();                                           //���Һ����м۸�����������������Ա�� 
    void jgcz2();                                           //���Һ����м۸���������������ͨ�û��� 
    void Del();                                             //ɾ����������   
     int login();                                            //��¼�������� 
    void sy();
    void yj();
    void tj1();
    void tj2();
    void jk();
struct goods                                                //����ṹ����� ��Ʒ��Ϣ
{
	char  num[100];                                         //��Ʒ���
    char  name[100];                                        //��Ʒ����
	float price;                                            //��Ʒ�۸�
	int   store;                                            //��Ʒ���
	int   sale;                                             //��Ʒ�Ѿ���������
}A[100],C[100],tem;
struct yhdl                                                 //����ṹ����� ��½��Ϣ 
{
	char yhm[100];                                          //�û��� 
	char mm[100];                                           //��¼���� 
}B[100];
static n=0;
static m=0;
