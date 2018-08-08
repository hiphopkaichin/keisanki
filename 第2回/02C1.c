#include <stdio.h>

int main()
{
    int a,b,s;
    int c = 1;
  
    scanf("%d %d", &a, &b);
    
    while(c != 0)
        {
              s = a ^ b;
              c = (a & b)<<1;
              a = s;
              b = c;
        }
    printf("%d\n",a);
  
    return 0;
}
