#include "fin.h"
void save()
{
	FILE*fp;                                                //定义文件类型指针
	if((fp=fopen("information.txt","wb"))==NULL)            //用只读方式打开文件，如果文件存在就将文件的地址给fp,如果不存在fp为空指针
	{
		printf("cannot open this file;\n");
		exit(0);
	}
	int j;
  for(j=0;j<n;j++)                                //删除文件重新输入数据
    {
        fprintf(fp,"%s ",A[j].num);  
        fprintf(fp,"%s ",A[j].name);
        fprintf(fp,"%f ",A[j].price);
        fprintf(fp,"%d ",A[j].store);
        fprintf(fp,"%d\n",A[j].sale);
    }
  fclose(fp);
}


void save1()
{
	FILE*fp;                                                //定义文件类型指针
	if((fp=fopen("password.txt","wb"))==NULL)            //用只读方式打开文件，如果文件存在就将文件的地址给fp,如果不存在fp为空指针
	{
		printf("cannot open this file;\n");
		exit(0);
	}
	int j;
  for(j=0;j<100;j++)                                //删除文件重新输入数据
    {
        fprintf(fp,"%s ",B[j].yhm);  
        fprintf(fp,"%s \n",B[j].mm);
    }
  fclose(fp);
}
