#include<stdio.h>

int main(void){
	
	int i, j;
	int matriz[3][3];
	
	for(i = 0; i < 3; i++){
		
		for(j = 0; j < 3; j++){
			
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i = 0; i < 3; i++){
		
		for(j = 0; j < 3; j++){
			
			printf("%d ", matriz[j][i]);
		}
		printf("\n");
	}
	
}
