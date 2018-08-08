#include <stdio.h>

int gakka(int course)
{
	int gakka;
	gakka = (course-15000000)/100000;
	return gakka;
}
char *course_name(int gakka)
{
	if(gakka == 0)
	{
		return "学生番号エラー (3桁目が0のため)";
	}
	else if(gakka==1)
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
char *error(int number)
{
	if(number<10000000)
	{
		return "学生番号エラー (桁数が足りない)";
	}
	else if(number>99999999)
	{
		return "学生番号エラー (桁数が多すぎる）";
	}
	else 
		return course_name(gakka(number));
}
int yearfunc(int number)
{
	int year,number2 = number / 100000;
	
	year = (number - number2*100000) / 1000;
	if(year>64)
	{
		return 1900 + year;
	}
	else
	{
		return 2000 + year;
	}
}
int main()
{
	int number;
	
	while(scanf("%d",&number) == 1){
		printf("%s",error(number));
		if(15100000<=number && number<16000000)
			printf(" %d 年度の入学生徒",yearfunc(number));
		printf("\n");
	}
	return 0;
}
