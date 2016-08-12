#include<stdio.h>
#include<assert.h>
#include<string.h>
char *my_strncpy(char *dest,const char *src,int n)
{
	//有效性的判断
	assert(dest && src);
	assert(n<=strlen(src));
	char *ret = dest;
	//strncpy的实现不保证目标字符串的有效性判断
	while(n > 0 && *src != '\0')
	{
		*dest=*src;
		n--;
		dest++;
		src++;
	}
	return ret;
}


int main()
{

	char a[6]="asdf";
	char b[]="rrrrrrr";
	my_strncpy(a,b,7);
	printf("a:%s\n",a);
	return 0;
}

