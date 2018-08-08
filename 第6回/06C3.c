#include <stdio.h>
#include <string.h>

typedef struct hobby
{
	char name[40];
	int number;
}HOBBY;

int main()
{
	int i,j,k,lenMAX=0;
	char a,b[40];
	HOBBY data[10];
	printf("Please input Students' hobbies:\n");
	for(i=0;i<10;i++)
	{
		printf("Hobby %d: ",i+1);
		fgets(data[i].name,40,stdin);
		data[i].name[strlen(data[i].name)-1] = ':';
		if(lenMAX<=strlen(b))
		{
			lenMAX = strlen(b);
		}

		printf("Number of students for hobby %d: ",i+1);
		scanf("%d",&data[i].number);
		if(getchar() == EOF)
		{
			break;
		}
	}
	printf("Students' hobbies:\n");
	for(j=0;j<=i;j++)
	{
		printf("%-*s",lenMAX,data[j].name);
		for(k=1;k<=data[j].number;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}