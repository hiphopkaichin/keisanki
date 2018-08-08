#include <stdio.h>

typedef struct{
	char name[20];
	int price;
}Drink;

int main(){
	
	Drink data[5] = {
		{"Cola",110},
		{"Milk tea",140},
		{"Coffee",210},
		{"Tomato juice",190},
		{"Shimijimi",120}
	};
	
	int i,n,error,j,pricesum=0,changesum,insprice[5],noenoghsum;
	int pricepattern[5]={1000,500,100,50,10};
	int change[5]={0,10,10,10,10},retchange[5];
	int noenogh[5]={0,10,10,10,10};
	while(1){
		noenoghsum=0;
		error=0;
		for(i=0;i<5;i++){
			retchange[i] = 0;
			printf("%d: %-13s%d Yen\n",i+1,data[i].name,data[i].price);
		}
		printf("Enter the number of the drink you want to buy (or Ctrl+D to finish): ");
		if(scanf("%d",&n)!=1){
			break;
		}
		printf("\nYou are buying a %s (price: %d Yen). Please insert your money.\n",data[n-1].name,data[n-1].price);
		for(j=0;j<5;j++){
			printf("%4d Yen: How many? ",pricepattern[j]);
			scanf("%d",&insprice[j]);
			change[j]+= insprice[j];
		}
		for(j=0;j<5;j++){
			pricesum+= pricepattern[j]*insprice[j];
			noenogh[j]=change[j];
		}
		pricesum -= data[n-1].price;
		for(j=0;j<5;j++){
			if(j==0){
				if(pricesum==0){
					error=2;
				}
			}
			if(pricesum<0){
				error = 3;
			}
			else if(pricesum>=pricepattern[j]){
				while(pricesum>=pricepattern[j]&&noenogh[j]>0){
					pricesum -= pricepattern[j];
					noenogh[j]--;
					retchange[j]++;
				}
			}
		}
		if(pricesum>0){
			error = 1;
			printf("\nPrice: %d Yen, not enough change.\n",data[n-1].price);
		}
		else if(error==2){
			printf("\nPrice: %d Yen, no change needed.\n",data[n-1].price);
		}
		else if(error==3){
			printf("\nPrice: %d Yen, not enough money.\n",data[n-1].price);
		}
		else{
			printf("\nPrice: %d Yen, change available.\n",data[n-1].price);
		}
		printf("Denominations (Yen): 1000  500  100   50   10\n");
		printf("Money paid:             %d    %d    %d    %d    %d\n",insprice[0],insprice[1],insprice[2],insprice[3],insprice[4]);
		printf("Change given back:  ");
		if((pricesum>0)||(error==3)){
			for(j=0;j<5;j++){
				printf("%5d",insprice[j]);
			}
			printf("\n");
		}
		else{
			for(j=0;j<5;j++){
				printf("%5d",retchange[j]);
			}
			printf("\n");
			
		}
		printf("Remaining stock:     ");

		for(j=0;j<5;j++){
			if(error==1||error==3){
				change[j]-= insprice[j];
				printf("%5d",change[j]);
			}
			else{
				change[j] = noenogh[j];
				printf("%5d",change[j]);
			}
		}
		printf("\n\n");
	}
	return 0;
}
