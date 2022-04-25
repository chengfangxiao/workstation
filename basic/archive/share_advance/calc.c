#include<stdio.h>
int calc_jiecheng(int num, int* result)
{
	if( (num>10)
	||(num<1)||(result == NULL)		)
	{
		return -1;
	}
	*result=num*5; //fake
	return 0;
}
