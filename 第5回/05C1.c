#include <stdio.h>

char *course_name(int course)
{
	int gakka;
	
	gakka = course/100000-15000000;
	if(gakka==1)
	{
		return "物理・数理学科";
	}
	else if(gakka==2)
	{
		return "化学・生命科学科";
	}
	else if(gakka==3)
	{
		return "機械工学科";
	}
	else if(gakka==4)
	{
		return "電気電子工学科";
	}
	else if(gakka==5)
	{
		return "経営工学科";
	}
	else if(gakka==6)
	{
		return "機械創造工学科";
	}
	else if(gakka==7)
	{
		return "経営システム工学科";
	}
	else if(gakka==8)
	{
		return "情報テクノロジー学科";
	}
	else if(gakka==9)
	{
		return "聴講生";
	}
	else
	{
		return "理工学部の学生ではありません (最初の2桁が15でないため)";
	}
}

int year(int course)
{
	
}
int main()
{
	int number,number2,year;
	while(scanf("%d",&number) == 1){
		number2 = number / 100000;
		year = (number - number2*100000) / 1000;
		if(year>64)
		{
			year = 1900 + year;
		}
		else
		{
			year = 2000 + year;
		}
		 
		if(number<10000000)
		{
			printf("学生番号エラー (桁数が足りない)");
		}
		else if(number>99999999)
		{
			printf("学生番号エラー (桁数が多すぎる）");
		}
		else{
			printf("%s %d年度入学の学生", course_name(number),year);
		}
	}
	return 0;
}
