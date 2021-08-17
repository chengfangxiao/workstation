#include<stdio.h>
extern int get_the_message(int a);
int calc_jiecheng(int num, int* result)
{
	if( (num>10)
	||(num<1)||(result == NULL)		)
	{
		return -1;
	}
	if(0!=get_the_message(1))
	{
		return -1;
		printf("cant get the message!");
	}
	*result=num*5; //fake
	return 0;
}
