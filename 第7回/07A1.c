#include <stdio.h>
#include "07A1.h"

int main()
{
  Complex a;
  Complex b;
  a = input_complex();
  b = input_complex();
  printf("Input a:        ");
  output_complex(a);
  printf("\nInput b:        ");
  output_complex(b);
  printf("\nAddition:       ");
  output_complex(add_complex(a,b));
  printf("\nSubtraction:    ");
  output_complex(sub_complex(a,b));
  printf("\nMultiplication: ");
  output_complex(mul_complex(a,b));
  printf("\nDivision:       ");
  output_complex(div_complex(a,b));
  printf("\n");
  return 0;
}
