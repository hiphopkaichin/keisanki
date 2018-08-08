#include <stdio.h>
#include "07C2.h"

Date read_date(void)
{
	Date a;
	scanf("%d/%d/%d",&a.year,&a.month,&a.day);
	return a;
}

void write_date(Date d)
{
	printf("%d/%02d/%02d",d.year,d.month,d.day);
}

int leap_year(int year)
{
	if(year%4==0)
	{
		return 1;
	}
	return 0;
}

int year_length(int y)
{
	if(y%4==0)
	{
		return 366;
	}
	return 365;
}
int month_length(int y, int m)
{
	switch(m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
			break;
		case 2:
			if(y%4==0)
			{
				return 29;
			}
			else
			{
				return 28;
			}
			break;
		default:
			return 10;
	}
}

int date_valid(Date a)
{
	if(a.day!=0)
	{
		switch(a.month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			case 4:
			case 6:
			case 9:
			case 11:
			case 2:
				return 10;
			default:
				return 0;
		}
	}
	else
	{
		return 0;
	}
}
