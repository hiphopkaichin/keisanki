#include <stdio.h>
#include "07C2.h"


int main()
{
	Date a;
	a = read_date();
	write_date(a);
	leap_year(a.year);
	year_length(a.year);
	month_length(a.year,a.month);
	date_valid(a);
	return 0;
}
