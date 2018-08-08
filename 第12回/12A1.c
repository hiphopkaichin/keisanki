#include <stdio.h>

int main()
{
	FILE *fp;
	int i,j;
	char c[100];
	
	
	fp = fopen("myinfo.txt","w");
	
	if(fp==NULL)
	{
		fprintf(stderr,"ファイルが開けません\n");
		return(-1);
	}
	
	printf("Your name, please:\n");
	fgets(c,100,stdin);
	fputs(c,fp);
	printf("Your student number, please:\n");
	fgets(c,100,stdin);
	fputs(c,fp);
	printf("Your age, please:\n");
	fgets(c,100,stdin);
	fputs(c,fp);
	printf("Your e-mail address, please:\n");
	fgets(c,100,stdin);
	fputs(c,fp);
	fclose(fp);
	return 0;
}
