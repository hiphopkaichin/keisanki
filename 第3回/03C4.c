#include <stdio.h>

int main()
{
  double a,b,c;
  
  printf("Input the length of the sides of the triangle: ");
  
  scanf("%lf %lf %lf", &a, &b, &c);
  
  if(a>=b+c || b>=a+c || c>=a+b || a<0 || b<0 || c<0)
  {
    printf("0 (not a valid triangle)");
  }
  else if(a==b && b==c)
  {
    printf("3 (equilateral)");
  }
  else if(a==b || b==c || a==c)
  {
    printf("2 (isosceles)");
  }
  else
  {
    printf("1 (scalene)");
  }
  return 0;
}
