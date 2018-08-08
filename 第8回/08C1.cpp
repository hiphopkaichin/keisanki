#include <stdio.h>

class Complex
{
	double real;
	double immaginary;
public:
	Complex();
	Complex(const char *prompt);
	Complex add(Complex others);
	Complex sub(Complex others);
	Complex mul(Complex others);
	Complex div(Complex others);
	void print();
};
Complex::Complex()
{
	real=1.00;
	immaginary=0.00;
}

Complex::Complex(const char *prompt)
{
    printf("%s,", prompt);
    fflush(stdout);
	printf(" real part: ");
    scanf("%lf", &real);
	printf("immaginary part: ");
    scanf("%lf", &immaginary);
}
Complex Complex::add(Complex others)
{
	Complex c;
	c.real = real+others.real;
	c.immaginary = immaginary+others.immaginary;
	return c;
}
Complex Complex::sub(Complex others)
{
	Complex c;
	c.real = real-others.real;
	c.immaginary = immaginary-others.immaginary;
	return c;
}
Complex Complex::mul(Complex others)
{
	Complex c;
	c.real = real * others.real + -(immaginary * others.immaginary);
	c.immaginary = real*others.immaginary + others.real*immaginary;
	return c;
}
Complex Complex::div(Complex others)
{
	Complex c;
	c.real = (real * others.real + immaginary * others.immaginary)/(others.real * others.real + others.immaginary * others.immaginary);
	c.immaginary = (immaginary * others.real - real * others.immaginary)/(others.real * others.real + others.immaginary * others.immaginary);

	return c;
}
void Complex::print()
{
	if(real==0&&immaginary==0)
	{
		printf("(%.2f)",real);
	}
	else if(real==0)
	{
		printf("(%.2fi)",immaginary);
	}
	else if(immaginary==0)
	{
		printf("(%.2f)",real);
	}
	else
	{
		printf("(%.2f%+.2fi)",real,immaginary);
	}
}
#include "08C1main.cpp"
