// 07C2.h

typedef struct {
    int year;
    int month;
    int day;
} Date;

Date read_date(void); // reads a date in the form year/month/day
                      // fields that cannot be read are set to 0

void write_date(Date d); // writes a date in the form year/month/day
                         // year is four digits, month and day are two digits

int leap_year(int year); // return false (0) if year is not in a leap year,
                         // true (a value other than 0) if year is a leap year

int year_length(int y);  // return length of year y

int month_length(int y, int m); // return the length of month m in year y
                                // (returns 10 for non-existing months)

int date_valid(Date a); // return false (0) if date is not valid (e.g. 2013/04/31),
                        // true (a value other than 0) if date is valid
                        // does not check range of year
