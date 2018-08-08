
Complex input_complex(void)
{
	Complex one;
	scanf("%lf",&one.real);
	scanf("%lf",&one.immaginary);
	return one;
}
void output_complex(Complex c)
{
	if(c.real==0&&c.immaginary==0)
	{
		printf("(%.2f)",c.real);
	}
	else if(c.real==0)
	{
		printf("(%.2fi)",c.immaginary);
	}
	else if(c.immaginary==0)
	{
		printf("(%.2f)",c.real);
	}
	else
	{
		printf("(%.2f%+.2fi)",c.real,c.immaginary);
	}
}

Complex add_complex(Complex a, Complex b)
{
	Complex c;
	c.real = a.real+b.real;
	c.immaginary = a.immaginary+b.immaginary;
	return c;
}

Complex sub_complex(Complex a, Complex b)
{
	Complex c;
	c.real = a.real-b.real;
	c.immaginary = a.immaginary-b.immaginary;
	return c;
}
Complex mul_complex(Complex a, Complex b)
{
	Complex c;
	c.real = a.real * b.real + -(a.immaginary * b.immaginary);
	c.immaginary = a.real*b.immaginary + b.real*a.immaginary;
	return c;
}
Complex div_complex(Complex a, Complex b){
	Complex c;
	c.real = (a.real * b.real + a.immaginary * b.immaginary)/(b.real * b.real + b.immaginary * b.immaginary);
	c.immaginary = (a.immaginary * b.real - a.real * b.immaginary)/(b.real * b.real + b.immaginary * b.immaginary);

	return c;
 }
