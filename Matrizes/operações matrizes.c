#include<stdio.h>

int main(void){
	
	int n, i, j;

	scanf("%d", &n);
	
	int matriz[n][n], vetor[n];
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	
	int soma = 0;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			soma += matriz[j][i];
		}
		vetor[i] = soma;
		soma = 0; 
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < n; i++){
		printf("Soma da coluna %d = %d \n", i, vetor[i]);
	}
	
	int mult = 0;
	
	for(i = 0; i < n; i++){
		mult = vetor[i] * matriz[i][i];
		printf("Multiplica coluna %d = %d \n", i, mult);
	}
}
