#include<stdio.h>

size_t my_strlen(const char *src)
{
	const char *eos=src;
	while(*eos++)
		;
	return (eos-src-1);
//	while(*eos)
//		eos++;
//	return eos-src;
}



int main()
{

	char *src="1234";
	printf("%zu\n",my_strlen(src));
	return 0;
}
