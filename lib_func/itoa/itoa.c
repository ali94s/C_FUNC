#include<stdio.h>
#include<stdlib.h>
#include<string.h>
static char ret[20];
static int i=0;

char* func(int data);
char* my_itoa(int data);


//翻转字符串  使用前后指针  如果遇到类似的翻转问题都可以考虑使用前后指针来解决
char* reverse(char* string)
{
	size_t len=strlen(string);
	char *start=string;
	char *end=string+len-1;
	while(start<end)
	{
		char tmp=*start;
		*start=*end;
		*end=tmp;
		start++;
		end--;
	}
	return string;
}
//将一个整形数转换为字符串
char* my_itoa(int data)
{
	memset(ret,'\0',sizeof(ret));
	if(data<0)
	{
		data=data*(-1);
		ret[i++]='-';
	}
	return func(data);
}

//使用递归的方法
char* func(int data)
{
	if(data<10)
	{	
		ret[i++]=data+'0';
		return ret;
	}
	func(data/10);
	ret[i++]=data%10+'0';
	return ret;
}


int main()
{
	int a=-100000;
	char str[10]="qwer";
	printf("%zu\n",strlen(str));
	printf("%s\n",reverse(str));
	printf("%s\n",my_itoa(a));
	return 0;
}
