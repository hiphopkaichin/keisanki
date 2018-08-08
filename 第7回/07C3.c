#include <stdio.h>
#include "07C3.h"

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
	if(year%400==0)
	{
		return 1;
	}
	else if(year%100==0)
	{
		return 0;
	}
	else if(year%4==0)
	{
		return 1;
	}
	return 0;
}

int year_length(int y)
{
	if(y%400==0 || y%4==0)
	{
		return 366;
	}
	else if(y%100==0)
	{
		return 365;
	}
	else
	{
		return 365;
	}
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
			if(y%100==0)
			{
				return 28;
			}
			else if(y%4==0||y%400==0)
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
	switch(a.month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(1<=a.day && a.day<=31)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(1<=a.day && a.day<=30)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 2:
			if(a.year%100==0)
			{
				if(1<=a.day && a.day<=28)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if(a.year%4==0||a.year%400==0)
			{
				if(1<=a.day && a.day<=29)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				if(1<=a.day && a.day<=28)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			break;
		default:
			return 0;
	}
}

int day_of_year(Date a)
{
	int startday=0;
	while(a.month!=1)
	{
		startday+=month_length(a.year,a.month);
		a.month--;
	}
	return startday+a.day;
}

Date day_to_date(int y,int d)
{
	Date a;
	int i=1;
	while(month_length(y,i)<d)
	{
		d-=month_length(y,i);
		i++;
	}
	a.year=y;
	a.month=i;
	a.day=d;
	return a;
}
int date_comp(Date a,Date b)
{
	if(a.year==b.year && a.month==b.month && a.day==b.day)
	{
		return 0;
	}
	else if(a.year>b.year || a.month>b.month || a.day>b.day)
	{
		return 10;
	}
	else
	{
		return -10;
	}
}

int duration(Date start, Date end)
{
	int diffday=0;
	if(start.year==end.year && start.month==end.month && start.day==end.day)
	{
		return 0;
	}
	else if(start.month==end.month)
	{
		return end.day-start.day;
	}
	else if(start.year==end.year)
	{
		return day_of_year(end)-day_of_year(start);
	}
	else
	{
		if(start.year<end.year)
		{
			while(start.year!=end.year)
			{
				diffday+=year_length(start.year);
				start.year++;
			}
			return diffday+day_of_year(end)-day_of_year(start);
		}
		else
		{
			while(start.year!=end.year)
			{
				diffday-=year_length(start.year);
				start.year--;
			}
			return diffday+day_of_year(end)-day_of_year(start);

		}
	}
}
Date date_add(Date start, int duration)
{
	if(duration<0)
	{
		while(duration<-year_length(start.year))
		{
			duration+=year_length(start.year);
			start.year--;
		}
	}
	else if(duration>0)
	{
		while(duration>year_length(start.year))
		{
			duration-=year_length(start.year);
			start.year++;
		}
	}

	start = day_to_date(start.year,day_of_year(start)+duration);
	
	return start;
} 
