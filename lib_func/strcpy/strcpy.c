#include<stdio.h>
#include<assert.h>

//将src中的字符复制到dest中
char *mystrcpy(char *dest,const char *src)
{
	assert(dest&&src);
	char *ret=dest;
	while(*src!='\0')
	{
		*dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
	return ret;
}

int main()
{
	char a[]="asdss";
	char b[]="qwer";
	mystrcpy(a,b);
	printf("a:%s\n",a);
	printf("b:%s\n",b);
	return 0;
}
