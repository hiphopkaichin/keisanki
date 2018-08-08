#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
	char name[10];
	int Ph;
	int Pro;
	int Ca;
	int VitA;
	int VitC;
	int Price;
}Food;

int main()
{
	int i,nutrientprice[5],SumpriceA=0,SumB=0;
	Food data[8] = {
		{"Beef",1,1,0,0,0,22},
		{"Shrimp",0,1,1,0,0,20},
		{"Tomato",1,0,0,1,1,37},
		{"Banana",1,0,0,0,1,16},
		{"Onion",1,0,1,1,0,20},
		{"Garlic",0,1,0,0,1,29},
		{"Orange",0,0,0,0,1,7},
		{"Milk",1,1,1,1,0,50}
	};
	for(i=0;i<5;i++){
		printf("Price you are ready to pay for nutrient %d: ",i+1);
		scanf("%d",&nutrientprice[i]);
		SumpriceA += nutrientprice[i];
	}
	if((nutrientprice[0]+nutrientprice[1])>=22){
		SumB += nutrientprice[0]+nutrientprice[1]-22;
	}
	if((nutrientprice[1]+nutrientprice[2])>=20){
		SumB += nutrientprice[1]+nutrientprice[2]-20;
	}
	if((nutrientprice[0]+nutrientprice[3]+nutrientprice[4])>=37){
		SumB += nutrientprice[0]+nutrientprice[1]+nutrientprice[2]-37;
	}
	if((nutrientprice[0]+nutrientprice[4])>=16){
		SumB += nutrientprice[0]+nutrientprice[4]-16;
	}
	if((nutrientprice[0]+nutrientprice[3]+nutrientprice[2])>=20){
		SumB += nutrientprice[0]+nutrientprice[3]+nutrientprice[2]-20;
	}
	if((nutrientprice[1]+nutrientprice[4])>=29){
		SumB += nutrientprice[1]+nutrientprice[4]-29;
	}
	if(nutrientprice[4]>=7){
		SumB += nutrientprice[4]-7;
	}
	if((nutrientprice[0]+nutrientprice[1]+nutrientprice[3]+nutrientprice[2])>=50){
		SumB += nutrientprice[0]+nutrientprice[1]+nutrientprice[3]+nutrientprice[2]-50;
	}
	printf("Lower bound: %d Yen.",SumpriceA-SumB);
	return 0;
}
