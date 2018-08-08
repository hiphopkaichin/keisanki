#include <stdio.h>

long combinations(int n, int r)
{
	if(r==0)
		return 1;
	else if(n==r)
		return 1;
	else if(r==1)
		return n;
	else
		return( combinations(n-1, r-1) + combinations(n-1, r) ); 
}

int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){
			printf(" %3ld",combinations(i, j));
			if(i==j)
				printf("\n");
		}
	}
	return 0;
}
