#include <stdio.h>

int main()
{
	int c;
	while((c = getchar()) != EOF)
	{
		printf("%3d 0x%02X\n",c,c);
	}
	return 0;
}
