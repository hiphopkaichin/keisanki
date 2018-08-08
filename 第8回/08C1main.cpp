// 08C1main.cpp
#include <stdio.h>

void output_line(const char *text, Complex a)
{
    printf(text);
    a.print();
    putchar('\n');
}

int main(void)
{
    printf("Please input complex numbers.\n");
    Complex a("First complex number");
    Complex b("Second complex number");
    Complex unit;

    Complex sum        = a.add(b);
    Complex difference = a.sub(b);
    Complex product    = a.mul(b);
    Complex quotient   = a.div(b);

    printf("\n");
    output_line("Unit:           ", unit);
    output_line("Input a:        ", a);
    output_line("Input b:        ", b);
    output_line("Addition:       ", sum);
    output_line("Subtraction:    ", difference);
    output_line("Multiplication: ", product);
    output_line("Division:       ", quotient);

    return 0;
}
