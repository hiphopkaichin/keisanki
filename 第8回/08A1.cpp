#include <stdio.h>
#define scan scanf("%d",&a);

class day
{
public:
	int year;
	int month;
	int day;
};

int main()
{
	int a;
	day A;
	printf("日付を入力して下さい:\n年:");
	scan
	A.year = a;
	printf("月:");
	scan
	A.month = a;
	printf("日:");
	scan
	A.day = a;
	printf("%d/%d/%d",A.year,A.month,A.day);
	return 0;
}
