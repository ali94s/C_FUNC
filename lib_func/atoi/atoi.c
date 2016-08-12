#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int my_atoi(const char* string)
{
	assert(string);
	int ret=0;
	char symbol='+';
	//去空格
	while(*string==' ')
	{
		string++;	
	}
	//处理符号位    如果有的话
	if(*string=='-' || *string=='+')
	{
		symbol=*string;
		string++;
	}
	
	while(*string)
	{
		//异常情况  直接退出（打印异常前面的数字）
		if(*string<'0'||*string>'9')
		{
			//printf("数据异常\n");
			//exit(1);
			break;
		}
		ret=ret*10+*string-'0';
		string++;
	}
	if(symbol=='-')
		ret*=(-1);
	return ret;
}


int main()
{
	char *a="          -123f4f5";
	printf("%d\n",atoi(a));
	printf("%d\n",my_atoi(a));
	return 0;
}
