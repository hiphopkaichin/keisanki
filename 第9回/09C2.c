#include <stdio.h>


int main()
{
    int i;
	static const char *const months[] = 
	{ 
	"January", "February", "March","April",
	"May", "June", "July", "August", "September",
	"October", "November", "December", "unknown month"
	};
    for (i = 0; i < 12; i++)
	{
        printf("Address of %s: %p\n",months[i], months[i]);
        printf("Address of pointer to %s: %p\n",months[i], &(months[i]));
    }
	return 0;
}
