#include <stdio.h>
#include <ctype.h>

int main()
{
	int c=0;
	
	while ((c =getchar()) != EOF)
	{
		if(65<=(int)c && (int)c<=90)
		{
			c += 32;
			putchar(c);
		}
		else if(97<=(int)c && (int)c<=122)
		{
			c -= 32;
			putchar(c);
		}
		else
		{
			putchar(c);
		}
	}
	return 0;
}
