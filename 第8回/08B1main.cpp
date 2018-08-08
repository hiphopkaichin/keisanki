// 08B1main.cpp

int main(void)
{
    Date someday;
    int input;

    printf("Please input a date:\n");
    printf("Year: ");
    scanf("%d", &input);
    someday.set_year(input);
    
    printf("Month: ");
    scanf("%d", &input);
    someday.set_month(input);
    
    printf("Day: ");
    scanf("%d", &input);
    someday.set_day(input);
    
    someday.print();

    return 0;
}
