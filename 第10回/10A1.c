#include <stdio.h>

typedef struct{
	int i;
    char b;
    char c;
    short s;
    double d;
} test;

int main()
{
    test a;
    test many[10000];

    printf("Address of char member: %p\n", &a.c);
    printf("Address of int member: %p\n", &a.i);
    printf("Address of short member: %p\n", &a.s);
    printf("Address of double member: %p\n", &a.d);
    printf("Difference in bytes between addresses of int and char: %d\n",
        (int)&a.i - (int)&a.c);
    printf("Difference in bytes between addresses of short and int: %d\n",
        (int)&a.s - (int)&a.i);
    printf("Size of char: %d bytes\n", sizeof(char));
    printf("Size of short: %d bytes\n", sizeof(short));
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of double: %d bytes\n", sizeof(double));
    printf("Size of test structure: %d bytes\n", sizeof(test));
    printf("Size of array of test structures: %d bytes\n", sizeof(many));

    return 0;
}
