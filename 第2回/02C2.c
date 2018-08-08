#include <stdio.h>

int main()
{
    int a,b,c;
    int d = 0;
    scanf("%d %d", &a, &b);
    while(a!=0)
    {
          if((a&1)==1)
          {
              d = d + b;
          }    
          b = b << 1;     
          a = a >> 1;

    }
    printf("%d\n",d);
  
    return 0;
}
