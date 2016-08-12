#include<stdio.h>
#include<assert.h>

//比较两个字符串是不是相同
int my_strcmp(const char *dest,const char *src)
{
	int ret=0;
	while( !(ret=*dest-*src) && *src!='\0')
	{
		++dest,++src;
	}
	return ret;
}


int main()
{
	char *a="qwer";
	char *b="qwer";
	char *c="ertt";
	char *d="xcvb";
	printf("a=b:%d\n",my_strcmp(a,b));
	printf("a>c:%d\n",my_strcmp(a,c));
	printf("a<d:%d\n",my_strcmp(a,d));
	printf("c<d:%d\n",my_strcmp(c,d));
	return 0;
}

