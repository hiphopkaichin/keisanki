#include <stdio.h>


int number_10^n(int n)
{
	number_10^n(n)=10;
	if(n<=0)
	{
		return 0;
	}
	else
		return 10*number_10^n(n-1);
}
int main()
{
	printf("%d",number_10^n(5));
	return 0;
}