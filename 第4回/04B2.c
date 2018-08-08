#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c[] = "Aoyama Gakuin University";
	int a,i;
	double b;
	a = getchar();
	printf("%c\n",a);
	printf(" %d\n",a);
	scanf("%d",&a);
	printf("%d\n",a);
	printf(" %d\n",a);
	printf(" %d\n",a);
	printf("%c\n",a);
	scanf("%d",&a);
	printf("  %10d\n",a);
	scanf("%lf",&b);
	printf("  %.4f\n",b);
	printf("%.2f\n",b);
	printf("%.3f\n",b);
	scanf("%lf",&b);
	printf("%.12lf\n",b);
	printf("   %17.11g\n",b);
	printf("%-20s\n",c);
	printf("%-30s\n",c);
	printf("%30s\n",c);
	
	return 0;
}
