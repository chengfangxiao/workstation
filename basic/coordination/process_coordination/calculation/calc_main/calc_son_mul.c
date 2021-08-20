#include <stdio.h>
#include "calc.h"
#include <sys/un.h>

#include <sys/types.h>			/* See NOTES */
#include <sys/socket.h>
#include <errno.h>
#include <unistd.h>

int main(int argc,char *argv[])
{
	printf("son process  create the socket, connect the server \n");
	struct sockaddr_un addr;
	int sfd;
	unsigned int numRead;
	char buf[BUF_SIZE];
	
	sfd = socket(AF_UNIX,SOCK_STREAM,0);
	if(sfd==-1)
	{
		printf("cant get the sfd \n");
		return -1;
	//exit();		
	}

	memset(&addr,0,sizeof(struct sockaddr_un));
	addr.sun_family = AF_UNIX;
	strncpy(addr.sun_path,UNIX_SOCKET_SERVER_PATH,sizeof(addr.sun_path)-1);

	if(connect(sfd,(struct sockaddr *)&addr,sizeof(struct sockaddr_un))==-1)
	{
		return -1;
		
	}
	for(;;)
	{

		while((numRead = read(STDIN_FILENO,buf,BUF_SIZE))>0)
			{
				if(write(sfd,buf,numRead)!=numRead)
					{
					return -1;
					}
			}
		if(numRead ==-1)
		{
			return -1;
		}	
	}

	
	// int calc_num = 1;
	// int calc_jiecheng_result;
	// int ret = -1;
	// printf("this program can process !(jiecheng)\nplease input a num:\n");
	// scanf("%d",&calc_num);
	// if((calc_num<0)||
	// (calc_num>10)		)
	// {
	// 	printf("the num is to big\n");
	// 	return -1;
	// }
	// ret = calc_jiecheng(calc_num,&calc_jiecheng_result);
	// if(ret!=0)
	// {
	// 	return  -1;
	// }
	// printf("the result is %d\n",calc_jiecheng_result);

	// return 0;

}

