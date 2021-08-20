#define UNIX_SOCKET_SERVER_PATH "/tmp/us_for_calc"
#define BUF_SIZE 50
#define BACKWAIT 5
typedef struct calc_common
{
	unsigned char calc_type;
	int num1;
	int num2;
} s_calc_common;
typedef struct calc_common_result
{
	unsigned char calc_type;
	int num1;
	int num2;
} s_calc_common_result;
