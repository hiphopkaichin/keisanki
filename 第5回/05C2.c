#include <stdio.h>

char *reverse(char *a)
{
	if(fgets(a,100,stdin)!=NULL)
	{
		reverse(a);
		return a;
	}	
}

int main()
{
	char a[100];
	printf("%s",reverse(a));
	return 0;
}
