#include<stdio.h>
//求第一次出现的字符ch

char *my_strchr(const char *string,char ch)
{
	while(*string && *string!=ch)
		string++;
	if(*string==ch)
		return (char *)string;
	return NULL;
}

int main()
{
	char *string="qwertuii";
	char ch='r';
	if(my_strchr(string,ch))
		printf("1\n");
	else
		printf("0\n");
	return 0;
}
