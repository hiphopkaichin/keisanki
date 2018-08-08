#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int year;
    short month;
    short day;
} Date;

typedef struct {
    char name[40];
    char university[40];
    char department[40];
    Date birthday;
    char hobby[40];
} Student;

void clean_string(char *string, int length)
{
    int clean_flag = 0;
    char *end_string = string + length - 1;
    
    for ( ; string<end_string; string++) {
        if (*string=='\n' || *string=='\0')
            clean_flag = 1;
        if (clean_flag)
            *string = '\0';
    }
    *string = '\0';
}

int main()
{
	int i;
	char c[40],d;
	FILE *fp;
	Student data[20];
	fp = fopen("bininfo","wb");
	if(fp==NULL)
	{
		fprintf(stderr,"ファイルが開けません\n");
		return(-1);
	}
	
	for(i=0;i<20;i++)
	{
		printf("Input next student, please:\n");
		printf("Name:\n");
		if(fgets(data[i].name,40,stdin)==NULL)
		{
			break;
		}
		clean_string(data[i].name,40);
		printf("University:\n");
		if(fgets(data[i].university,40,stdin)==NULL)
		{
			break;
		}
		clean_string(data[i].university,40);
		printf("Department:\n");
		if(fgets(data[i].department,40,stdin)== NULL)
		{
			break;
		}
		clean_string(data[i].department,40);
		printf("Birthday:\n");
		if(scanf("%d/%hd/%hd",&data[i].birthday.year,&data[i].birthday.month,&data[i].birthday.day) != 3)
		{
			break;
		}
		printf("Hobby:\n");
		if(fgets(data[i].hobby,40,stdin)==NULL)
		{
			break;
		}
		if(fgets(data[i].hobby,40,stdin)==NULL)
		{
			break;
		}
		clean_string(data[i].hobby,40);

	}
	if(fwrite(&i,sizeof(int),1,fp)<1) 
	{
		fprintf(stderr,"error\n");
		return (-1);
	}
	if(fwrite(data,sizeof(Student),i,fp)<1) 
	{
		fprintf(stderr,"error\n");
		return (-1);
	}
	fclose(fp);
	return 0;
}
