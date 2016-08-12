#include<stdio.h>
#include<string.h>
//不同于memcpy的是考虑到了内存覆盖的问题
void *my_memmove(void *dst,const char *src,size_t count)
{
	void *ret=dst;
	if((char*)dst>=(char*)src && (char*)dst<=((char*)src+count))
	{
		//可能出现内存覆盖
		//dst=(char*)dst+count-1;
		//src=(char*)src+count-1;
		while(count)
		{
			//printf("%d ",count);
			*((char*)dst+count-1)=*((char*)src+count-1);
			count--;
			//此时的count--必须放在while循环内部  因为上面表达式使用count  在while条件中-- 表达式中的count是--后的值
			//dst=(char*)dst-1;
			//src=(char*)src-1;
		}
	}
	else
	{
		while(count--)
		{
			*(char*)dst=*(char*)src;
			dst=(char*)dst+1;
			src=(char*)src+1;
		}
	}
	return ret;
}


int main()
{
	int i=0;
	char a[]="asdfghjk";
	printf("%s\n",a);
	//memmove(a+2,a,5);
	my_memmove(a+2,a,5);
	printf("%s\n",a);
	return 0;
}
