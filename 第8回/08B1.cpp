#include <stdio.h>

class Date
{
	int year;
	int month;
	int day;
public:
	int set_year(int years);
	int	set_month(int months);
	int set_day(int days);
	void print(void);
};

int Date::set_year(int years)
{
	year = years;
}
int Date::set_month(int months)
{
	month = months;
}
int Date::set_day(int days)
{
	day = days;
}
void Date::print(void)
{
	printf("%d/%d/%d",year,month,day);
}
#include "08B1main.cpp"
