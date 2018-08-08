#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    int *linep;
	int i,number;
	scanf("%d",&number);
	if(!(linep=(int *) malloc(sizeof(int)*number)))
	{
		printf("Not enough memory!\n");
		exit(1);
	}

    for(i=0;i<number;i++)
	{
		scanf("%d",linep+i);
	}

    for(i=number-1;i>=0;i--)
	{
		printf("%d\n",*(linep+i));
	}
	free(linep);
    return 0;
}
