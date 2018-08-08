#include <stdio.h>
int main(void){
int i;
int sum=0;
for(i=1;i<=49;i=i+2){
sum=sum+i;
printf("The sum of odd numbers up to %d is %d.\n",i,sum);

}
return 0;
}
