#include<stdio.h>

void inverter(int vetor[], int tam){
	
	int i, j = (tam - 1), vetor2[tam];
	
	for(i = 0; i < tam; i++){
		vetor2[i] = vetor[j];
		j--;
	}
	
	for(i = 0; i < tam; i++){
		vetor[i] = vetor2[i];
	}
}

void printVetor(int vetor[], int tam){
	
	int i;
	
	for(i = 0; i < tam; i++){
		printf("%d ", vetor[i]);
	}
}

int main(void){
	
	int n, i;
	
	scanf("%d", &n);
	int vetor[n];
	
	for(i = 0; i < n; i++){
    	scanf("%d", &vetor[i]);
	}
	
	inverter(vetor, n);
	printVetor(vetor, n);	
}
