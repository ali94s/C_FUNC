#include<stdio.h>

//按照字节进行初始化    对于整形和其他的类型使用时要特别注意
void *my_memset(void *dst,int val,size_t count)
{
	char *start=(char *)dst;
	while(count--)
	{
		*(char *)dst=(char)val;
		dst=(char *)dst+1;
	}
	return start;
}

int main()
{
	char a[10];
	int i=0;
	my_memset(a,'a',sizeof(a)/sizeof(a[0]));
	for(;i<sizeof(a)/sizeof(a[0]);i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
