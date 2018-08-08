#include <stdio.h>

int main()
{
	int c;
	while((c = getchar()) !=EOF)
	{
		if(c == '<')
		{
			printf("&lt;");
		}
		else if(c == '>')
		{
			printf("&gt;");
		}
		else if(c == '&')
		{
			printf("&amp;");
		}
		else if(c == '\'')
		{
			printf("&apos;");
		}
		else if(c == '"')
		{
			printf("&quot;");
		}
		else
		{
			putchar(c);
		}
	}
return 0;
}
