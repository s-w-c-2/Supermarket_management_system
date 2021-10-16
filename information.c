#include "fin.h"
void information()                                          //用函数来从文件中读取信息
{
	int i=0;
	FILE*fp;                                                //定义文件类型指针
	if((fp=fopen("information.txt","r"))==NULL)             //用只读方式打开文件，如果文件存在就将文件的地址给fp,如果不存在fp为空指针
	{
		printf("cannot open this file;\n");
		exit(0);
	}
	while(!feof(fp))                                        //feof函数可以用来检测文件读写位置是否移到文件的末尾，如果是，则函数值为1，否则为0
	{
	fscanf(fp,"%s\n",A[i].num);  //商品编号
	fscanf(fp,"%s\n",A[i].name);//商品名称
	fscanf(fp,"%f\n",&A[i].price);//商品价格
	fscanf(fp,"%d\n",&A[i].store);//商品库存
	fscanf(fp,"%d\n",&A[i].sale); //商品已售                //用fscanf函数从文件中读取输入到结构体变量中
    i++;
	}
	n=i;
	fclose(fp);                                             //关闭文件以免被误用
}

