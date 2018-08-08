#include <stdio.h>

typedef struct 
{
	double real;
	double imagin;
}COMPLEX;
COMPLEX zerocomplex(COMPLEX c)
{
	if(c.real==0&&c.imagin==0)
	{
		printf("(%.2f)",c.real);
	}
	else if(c.real==0)
	{
		printf("(%.2fi)",c.imagin);
	}
	else if(c.imagin==0)
	{
		printf("(%.2f)",c.real);
	}
	else
	{
		printf("(%.2f%+.2fi)",c.real,c.imagin);
	}
}
COMPLEX adder(COMPLEX a,COMPLEX b)
{
	COMPLEX c;
	c.real = a.real+b.real;
	c.imagin = a.imagin+b.imagin;
	return zerocomplex(c);
}
COMPLEX subtraction(COMPLEX a,COMPLEX b)
{
	COMPLEX c;
	c.real = a.real-b.real;
	c.imagin = a.imagin-b.imagin;
	return zerocomplex(c);
}
COMPLEX multiplication(COMPLEX a,COMPLEX b)
{
	COMPLEX c;
	c.real = a.real * b.real + -(a.imagin * b.imagin);
	c.imagin = a.real*b.imagin + b.real*a.imagin;
	return zerocomplex(c);
}
COMPLEX output(COMPLEX one,COMPLEX two)
{
	zerocomplex(one);
	printf(" + ");
	zerocomplex(two);
	printf(" = ");
	adder(one,two);
	printf("\n");
	zerocomplex(one);
	printf(" - ");
	zerocomplex(two);
	printf(" = ");
	subtraction(one,two);
	printf("\n");
	zerocomplex(one);
	printf(" * ");
	zerocomplex(two);
	printf(" = ");
	multiplication(one,two);
	printf("\n");
}
int main()
{
	COMPLEX one;
	COMPLEX two;
	printf("計算する複素数を入力してください。\n");
	printf("はじめの複素数\n");
	printf("実数部=");
	scanf("%lf",&one.real);
	printf("虚数部=");
	scanf("%lf",&one.imagin);
	printf("次の複素数\n");
	printf("実数部=");
	scanf("%lf",&two.real);
	printf("虚数部=");
	scanf("%lf",&two.imagin);
	output(one,two);
	return 0;
}
