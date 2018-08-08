#include <stdio.h>
#include <stdlib.h>

#include "10B2.h"

char *getline1(void)
{
	char *buff;
	if(!(buff=(char *) malloc(sizeof(char)*100)))
	{
		printf("Not enough memory!\n");
		exit(1);
	}
	
	if(fgets(buff,100,stdin)!=NULL)
	{
		return buff;
	}
	free(buff);
}
