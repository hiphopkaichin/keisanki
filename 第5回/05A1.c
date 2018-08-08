#include <stdio.h>

int factorial(int a){
	if(a==0){
		return a+1;
	}
	else{
		return a*factorial(a-1);
	}
}

int main(){
	int n,i;
	scanf("%d",&n);
	
	printf("%d! = %ld\n", n, factorial(n));
	
	return 0;
}
