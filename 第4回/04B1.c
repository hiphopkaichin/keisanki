#include <stdio.h>

int main (void)
{
    int a=0;
    char buffer[4] = "abc";
    int b=0;
    
	
    while (a<200 && b<200) {
        printf("Before reading string: a=%d, b=%d, buffer=>>%s<<\n", a, b, buffer);
        fgets(buffer, 4 , stdin);
        a++;
        b++;
        printf("After reading string: a=%d, b=%d, buffer=>>%s<<\n\n", a, b, buffer);
    }

	
    return 0;
}
