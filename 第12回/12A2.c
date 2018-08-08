#include <stdio.h>

int main()
{
	FILE *fp;
	int i;
	char c[100];
	
	
	fp = fopen("myinfo.txt","r");
	
	if(fp==NULL)
	{
		fprintf(stderr,"ファイルが開けません\n");
		return(-1);
	}
	
	fgets(c,100,fp);
	printf("My name: %s",c);
	fgets(c,100,fp);
	printf("My student number: %s",c);
	fscanf(fp,"%d",&i);
	printf("My age: %d\n",i);
	fgets(c,100,fp);
	fgets(c,100,fp);
	printf("My e-mail address: %s",c);
	fclose(fp);
	return 0;
}
