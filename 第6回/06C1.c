#include <stdio.h>

typedef struct student
{
	int number;
	char name[20];
	double math;
	double eng;
}STUDENT;

STUDENT print_student1(STUDENT s)
{
	printf("学生番号%d番\n",s.number);
	printf("数学: ");
	scanf("%lf",&s.math);
	printf("英語: ");
	scanf("%lf",&s.eng);
	return s;
}
void print_student2(STUDENT s)
{
	printf("%d %s	%4.1f %4.1f ",s.number,&s.name,s.math,s.eng);
	if(s.math<50 && s.eng<60)
	{
		printf("X\n");
	}
	else if(s.math<50)
	{
		printf("M\n");
	}
	else if(s.eng<60)
	{
		printf("E\n");
	}
	else
	{
		printf(" \n");
	}
}

int main()
{
	int i;
	STUDENT data[20] =
	{
		{15991001, "安瀬聡希"},
		{15991003, "大谷聖子"},
		{15991015, "黒川哲也"},
		{15991023, "嶋田友子"},
		{15991044, "鈴木公孝"},
		{15991057, "中野幸助"},
		{15991064, "藤田永易"},
		{15991077, "満田道子"},
		{15991111, "山田吉慶"},
		{15991234, "渡辺花子"},
		{12345678, "例外太郎"},
		{12349875, "例題花子"},
		{12349458, "頑張学歩"},
		{12342584, "典型例恵"},
		{12348347, "数学解子"},
		{12341948, "限々足康"},
		{12348463, "英語完璧"},
		{12347628, "遊日抜郎"},
		{12344924, "繰返回郎"},
		{12341369, "整列順子"}
	};
	printf("学生の点数を入力して下しさい:\n");
	for(i=0;i<20;i++)
	{
		data[i] = print_student1(data[i]);
	}
	printf("Student# Name       Math Eng  Fail\n");
	printf("-------- ---------- ---- ---- ----\n");
	for(i=0;i<20;i++)
	{
		print_student2(data[i]);
	}
	printf("\n");
	return 0;
}
