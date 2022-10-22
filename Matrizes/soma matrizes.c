#include<stdio.h>
#include<time.h>

int main(void){
	
	int i, j;
	
	int matriza[5][5], matrizb[5][5], matrizc[5][5];
	
	printf("Matriz A: \n");
	for(i = 0; i < 5; i++){
		
		for(j = 0; j < 5; j++){
			matriza[i][j] = rand()%31;
			printf("%d \t", matriza[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMAtriz B: \n");
	for(i = 0; i < 5; i++){
		
		for(j = 0; j < 5; j++){
			matrizb[i][j] = rand()%31;
			printf("%d \t", matrizb[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMAtriz C: \n");
	for(i = 0; i < 5; i++){
		
		for(j = 0; j < 5; j++){
			matrizc[i][j] = matriza[i][j] + matrizb[i][j];
			printf("%d \t", matrizc[i][j]);
		}
		printf("\n");
	}
	
}
