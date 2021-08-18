#include <stdio.h>
#include "calc.h"
#include <sys/un.h>

#include <sys/types.h>			/* See NOTES */
#include <sys/socket.h>


int main(int argc,char *argv[])
{
	printf("first create the socket,bind as the server \n");
	struct sockaddr_un addr;
	int sfd,cfd;
	unsigned int numRead;
	char buf[BUF_SIZE];
	
	sfd = socket(AF_UNIX,SOCK_STREAM,0);
	if(sfd==-1)
	{
		printf("cant get the sfd \n");
		return -1;
	//exit();		
	}
	if(remove(UNIX_SOCKET_SERVER_PATH)==-1&&errno!=ENOENT)
	{
		return -1;
	}
	memset(&addr,0,sizeof(struct sockaddr_un));
	addr.sun_family = AF_UNIX;
	strncpy(addr.sun_path,UNIX_SOCKET_SERVER_PATH,sizeof(addr.sun_path)-1);

	if(bind(sfd,(struct sockaddr *)&addr,sizeof(struct sockaddr_un))==-1)
	{
		return -1;
		
	}
	if(listen(sfd,BACKWAIT)==-1)
	{
		return -1;
	}
	for(;;)
	{
		cfd = accept(sfd,NULL,NULL);
		if(cfd==-1)
		{
			return -1;
		}
		while((numRead = read(cfd,buf,BUF_SIZE)>0)
			{
				if(write(STDOUT_FILENO,buf,numRead)!=numRead)
					(
					return -1;
					)
			}
			
	}

	
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

