#include<stdio.h>

char *my_strcat(char *dst,const char *src)
{
	char *ret=dst;

	while(*ret)
		ret++;
	while(*ret++=*src++)
		;
	return dst;
}


int main()
{
	char dst[12]="asdf";
	char *src="qqqq";
	printf("%s\n",my_strcat(dst,src));
	return 0;
}

