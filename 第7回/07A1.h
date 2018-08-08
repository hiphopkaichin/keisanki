// 07A1.h

typedef struct {
    double real;
    double immaginary;
} Complex;

Complex input_complex(void);

void output_complex(Complex a);

Complex add_complex(Complex a, Complex b);

Complex sub_complex(Complex a, Complex b);

Complex mul_complex(Complex a, Complex b);

Complex div_complex(Complex a, Complex b);