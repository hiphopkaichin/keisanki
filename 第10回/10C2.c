#include <stdio.h>
#include <stdlib.h>


char *getline1(char *buff)
{
	int i=1;
	if(!(buff=(char *) malloc(sizeof(char)*20)))
	{
		printf("Not enough memory!\n");
		exit(1);
	}
	
	while((*buff=getchar())!='\0')
	{
		i++;
		if(i>20)
		{
			realloc(buff,20);
		}
		return getline1(buff+1);
	}
	return 0;
	
}
