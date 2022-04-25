#include<stdio.h>
// #include"calc.h"
#include <dlfcn.h>


#define DLOPEN_PATH "./libcalc.so"


int main(int argc,char *argv[])
{
	int calc_num = 1;
	int calc_jiecheng_result;
	int ret = -1;
	printf("this program can process !(jiecheng)\nplease input a num:\n");
	scanf("%d",&calc_num);
	if((calc_num<0)||
	(calc_num>10)		)
	{
		printf("the num is to big\n");
		return -1;
	}

	void *handle;
	int (*jiecheng)(int,int*);
	char* error;
	handle=dlopen(DLOPEN_PATH,RTLD_LAZY);
	if (!handle) 
	{
		printf("dlopen error\n");
		return -2;
	}
	dlerror();    /* Clear any existing error */
	jiecheng=(int (*)(int,int*))dlsym(handle,"calc_jiecheng");
	error = dlerror();
	if (error) 
	{
		printf("dlsym error\n");
		return -3;
	}
	ret = (*jiecheng)(calc_num,&calc_jiecheng_result);
	if(ret!=0)
	{
		return  -1;
	}
	printf("the result is %d\n",calc_jiecheng_result);
	dlclose(handle);
	return 0;

}
