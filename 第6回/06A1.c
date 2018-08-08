#include <stdio.h>
#define scan scanf("%d",&a);

typedef struct day
{
	int year;
	int month;
	int day;
}output;

int main()
{
	int a;
	output A;
	printf("日付を入力して下さい:\n年:");
	scan
	A.year = a;
	printf("月:");
	scan
	A.month = a;
	printf("日:");
	scan
	A.day = a;
	printf("%d年%d月%d日です",A.year,A.month,A.day);
	return 0;
}
