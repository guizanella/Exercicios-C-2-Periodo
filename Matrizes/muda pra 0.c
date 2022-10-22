#include<stdio.h>
#include<time.h>

int main(void){
	
	int i, j, inteiro;
	int matriz[5][5];
	
	srand(time(NULL));
	
	for(i = 0; i < 5; i++){
		
		for(j = 0; j < 5; j++){
			
			matriz[i][j] = 1 + rand()%10;
		}
	}
	
	for(i = 0; i < 5; i++){
		
		for(j = 0; j < 5; j++){
			
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &inteiro);
	
	if(inteiro == 0){
		
		for(i = 0; i < 5; i++){
			matriz[i][i] = 0;
		}
	}else if(inteiro % 2 == 0){
		
		for(i = 0; i < 5; i++){
			
			for(j = 0; j < 5; j++){
				
				if(j > i){
					matriz[i][j] = 0;
				}
			}
		}
	}else{
		for(i = 0; i < 5; i++){
			
			for(j = 0; j < 5; j++){
				
				if(i > j){
					matriz[i][j] = 0;
				}
			}
		}
	}
	
	for(i = 0; i < 5; i++){
		
		for(j = 0; j < 5; j++){
			
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
}
