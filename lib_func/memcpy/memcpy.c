#include<stdio.h>
#include<string.h>
//按照字节进行拷贝
void *my_memcpy(void *dst,const void *src,size_t count)
{
	void *ret=dst;
	while(count--)
	{
		*(char*)dst=*(char*)src;
		dst=(char*)dst+1;
		src=(char*)src+1;
	}
	return ret;
}


int main()
{

	char dst[]="aaaaaaaaaaaaaa";
	char src[]="bbbbbbbbb";
	my_memcpy(dst,src,strlen(src));
	printf("%s\n",dst);
	return 0;
}
