#include<stdio.h>

int get_the_message(int a)
{
	switch(a)
	{
		case 1:
		printf("it is good!\n");
		break;
		case 2:
		printf("it is not bad\n");
		break;
		default:
		printf("it is %d,not support!\n",a);
		break;
	}
	return 0;
}
