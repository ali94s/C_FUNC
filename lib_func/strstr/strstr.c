#include<stdio.h>

char *my_strstr(const char *str1,const char *str2)
{
	char *tmp=(char *)str1;
	char *s1,*s2;
	if(!*str2)
		return (char *)str1;
	while(*tmp)
	{
		s1=tmp;
		s2=(char *)str2;
		if(*s1==*s2)
		{
			while(*s2 && *s1 && *s1==*s2)
				s1++,s2++;
			if(!*s2)
				return tmp;
		}
		tmp++;
	}
	return NULL;
}



int main()
{

	char *str1="asdfghjhhhhh";
	char *str2="ghja";
	if(my_strstr(str1,str2))
		printf("HAVE\n");
	else
		printf("NULL\n");
	return 0;
}
