#include <stdio.h>
#include <ctype.h>

int countUpperCase(char *s)
{
	int UpperCase=0;
	while(*s != '\0')
	{
		if(isupper(*s))
		{
			UpperCase++;
		}
		s++;
	}
	return UpperCase;
}
int main(void)
{
	char a[100],*s;
	s = a;
	while(fgets(a,100,stdin)!=NULL)
	{
		printf("%d\n",countUpperCase(s));
	}
	return 0;
}
