#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    
    for(a=2;a<=20;a++)
    
    {
        b = (1<< a) - 2;
        
        if(b%a==0)
        {
              printf("%2d is a prime number.\n",a);
        }
        else
        {
              printf("%2d is not a prime number.\n",a);
        }
    }
    return 0;
}
