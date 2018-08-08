#include <stdio.h>

typedef struct Complex
{
	double real;
	double imagin;
}COMPLEX;

int main()
{
	double real,image;
	COMPLEX one;
	COMPLEX two;
	printf("計算する複素数を入力してください。\n");
	printf("はじめの複素数\n");
	printf("実数部=");
	scanf("%lf",&real);
	printf("虚数部=");
	scanf("%lf",&image);
	one.real = real;
	one.imagin = image;
	printf("次の複素数\n");
	printf("実数部=");
	scanf("%lf",&real);
	printf("虚数部=");
	scanf("%lf",&image);
	two.real = real;
	two.imagin = image;
	real = one.real + two.real;
	image = one.imagin + two.imagin;
	printf("(%.2f%+.2fi) + (%.2f%+.2fi) = (%.2f%+.2fi)",one.real,one.imagin,two.real,two.imagin,real,image);
	return 0;
}
