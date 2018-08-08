#include <stdio.h>
#include <math.h>

int main(){
int x;
for(x=0;x<=100;x++){
printf("%3d points ->%6.1lf points\n",x,sqrt(x)*10);
}
return 0;

}
