#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	a=login();                                              //��¼���� 
	information();                                          //����information�������ṹ�������ȡֵ
   while(1)
   {
   	if(a==1)
   	screen1();
   	else
   	screen2();
	} 
	return 0;

}
