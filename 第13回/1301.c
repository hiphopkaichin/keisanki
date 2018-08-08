#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n,time,i,j;
	double **a,seki[10],root[10],divine=0.0;
	printf("Number of boxes: ");
	scanf("%d",&n);
	a = malloc(sizeof(double *)*n);
	for (i=0;i<n;i++){
		a[i] = malloc(sizeof(double)*n);
	}
	time = n*(n-1)/2;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			printf("How many times more balls are in box %d than in box %d?",i+1,j+1);
			scanf("%lf",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		seki[i]=1.0;
		for(j=0;j<n;j++){
			if(i==j)
				a[i][j]=1.0;
			else if(i>j)
				a[i][j] = 1.0/a[j][i];
			seki[i] *= a[i][j];
		}
		root[i] = pow(seki[i],1.0/(double)n);
		divine += root[i];
	}
	for(i=0;i<n;i++){
		printf("There are about %.1lf balls in box %d\n",root[i]/divine*100,i+1);
	}
	
	return 0;
}
