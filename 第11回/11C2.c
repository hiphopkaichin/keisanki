#include <stdio.h>

int Rotation(int i, int a[])
{
	int temp, n;
	
	temp = a[0];
	for(n=0 ; n<i-1;n++)
	{
		a[n] = a[n+1];
	}
	a[i-1] = temp;
}

int printer (int i,int a[])
{
    int n;
	for(n = 0; n<i ;n++)
	{
		printf("%2d, ",a[n]);
	}
	printf("%2d\n",a[i]);

}

int Reverse(int a[],int p, int n)
{
	int i;
	if(n>=2)
	{
		for(i=0;i<n;i++)
		{
			Reverse(a,p,n-1);
			Rotation(n,a+p-n);
		}
	}
	else
	{
		printer(p-1,a);
	}
}

int main()
{
	int i=0,j=0,a[10];
	
	scanf("%d",&i);
	
	while(j<=i-1)
	{
		scanf("%d",&a[j]);
		j++;
	}
	
	Reverse(a, i, i);
	return 0;
}
