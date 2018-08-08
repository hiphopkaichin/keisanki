#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM 100
#define count 8888

int main(){
	
	int Tarokun,Hanakochan,lastTaro,lastHanako;
	
	int tarokaisuu[NUM],hanakokaisuu[NUM],c;
	
	int i,j,Sumtaro=0,Sumhanako=0;
	
	int error=0;
	
	while(1){
		c = count;
		
		error=0;
		
		Sumtaro=0; 
		
		Sumhanako=0;
		
		scanf("%d %d",&Tarokun,&Hanakochan);
	
		if(Tarokun==0&&Hanakochan==0){
			return 0;
		}
	
		for(i=0;i<Tarokun;i++){
			
			
			scanf("%d",&tarokaisuu[i]);
			
			Sumtaro = Sumtaro + tarokaisuu[i];
		}
		
		for(i=0;i<Hanakochan;i++){
			
			scanf("%d",&hanakokaisuu[i]);
			
			Sumhanako = Sumhanako + hanakokaisuu[i];
		}
		
		for(i = 0;i<Tarokun;i++){
			
			for(j = 0;j<Hanakochan;j++){
				
				if(Sumtaro-tarokaisuu[i]+hanakokaisuu[j]==Sumhanako-hanakokaisuu[j]+tarokaisuu[i]){
										
					if(c>(tarokaisuu[i]+hanakokaisuu[j])){
						
						c = tarokaisuu[i] + hanakokaisuu[j];
						lastTaro = tarokaisuu[i];
						lastHanako = hanakokaisuu[j];
						error = 1;
						
					}
						
					
				}
			}
		
		}
		
		if(error == 0){
			
			printf("-1\n");
			
		}
		else{
			
			printf("%d %d\n",lastTaro,lastHanako);
			
		}
	
	}
	
	return 0;
	
}
