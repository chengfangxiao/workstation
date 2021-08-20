#include<stdio.h>
// #include"calc.h"
#include<time.h>
#include<string.h>

#define OK 0
#define ERROR -1
static int calc_chengfa()
{
	int num_1=66,num_2=88,result;
	result = num_1*num_2;
	return OK;
}
int main(int argc,char *argv[])
{
	int calc_num = 1;
	int ret =OK;
	// int calc_jiecheng_result;
	// int ret = -1;

	// time spend
	clock_t begin,end;
	double time_spend;

	// date
	struct tm current_time;
	struct tm* current_time_p;
	char *wday[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
	memset(&current_time,0,sizeof(struct tm));
	time_t current_time_t;
	time(&current_time_t);
	current_time_p=localtime(&current_time_t);
	// current_time_p=gmtime(&current_time_t);
	printf("%d%d%d", (1900+current_time_p->tm_year), (1+current_time_p->tm_mon), current_time_p->tm_mday);
    printf("%s%d;%d;%d\n", wday[current_time_p->tm_wday], current_time_p->tm_hour, current_time_p->tm_min, current_time_p->tm_sec);
	printf("this program can process !(jiecheng)\nplease input a num in the 1~10:\n");
	scanf("%d",&calc_num);
	if((calc_num<0)||
	(calc_num>10)		)
	{
		printf("the num is to big or small\n");
		return -1;
	}
	printf("start calculate\n");
	begin=clock();
	for(int cycle_count=0;cycle_count<calc_num;cycle_count++)
	{
		for(int i=0;i<30000;i++)
		{
			ret = calc_chengfa();
			if(ret!=OK)
			{
				printf("calc_chengfa ERROR\n");
			}
		}	
	}
	end=clock();
	time_spend = (double)(end-begin)/CLOCKS_PER_SEC;
	printf("spend time is %f\nCLOCKS_PER_SEC is %ld\n",time_spend,CLOCKS_PER_SEC);

	return 0;

}
