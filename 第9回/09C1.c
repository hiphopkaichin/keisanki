#include <stdio.h>

const char *const month_name(int n)
{
	static const char *const months[] = 
	{ 
	"January", "February", "March","April",
	"May", "June", "July", "August", "September",
	"October", "November", "December", "unknown month"
	};
	if(1<=n && n<=12)
	{
		return months[n-1];
	}
	return months[12];
}

int main()
{
	int n;
	while(scanf("%d",&n)>=1)
	{
		printf("%s\n",month_name(n));
	}
	return 0;
}
