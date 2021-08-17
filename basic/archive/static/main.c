#include<stdio.h>
#include"calc.h"

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
	ret = calc_jiecheng(calc_num,&calc_jiecheng_result);
	if(ret!=0)
	{
		return  -1;
	}
	printf("the result is %d\n",calc_jiecheng_result);

	return 0;

}
