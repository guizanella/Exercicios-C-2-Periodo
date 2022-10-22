#include<stdio.h>
#include<math.h>

int potencia(int base, int expoente);

void potencia_vetor(int vetor[], int expoente);

void print_vetor(int vetor[]);

int main(void){
	
	int exp, n, pot;
	
	printf("Informe um numero: ");
	scanf("%d", &n);
	printf("Informe o expoente: ");
	scanf("%d", &exp);
	
	pot = potencia(n, exp);
	
	printf("\nA potenciacao eh: %d", pot);
	
	printf("\n\nInforme 5 valores do vetor: ");
	
	int i, vet[5];
	
	for(i = 0; i < 5; i++){
		scanf("%d", &vet[i]);
	}
	
	potencia_vetor(vet, exp);
	
	print_vetor(vet);
	
}

int potencia(int base, int expoente){
	
	int i, potencia = 1;
	
	if(expoente == 0){
		return 1;
		
	}else{
		
		for(i = 0; i < expoente; i++){
	
			potencia = potencia * base;
		}
		return potencia;
	}	
}

void potencia_vetor(int vetor[], int expoente){
	
	int i;
	
	for(i = 0; i < 5; i++){
		vetor[i] = potencia(vetor[i], expoente);
	}
}

void print_vetor(int vetor[]){
	
	int i;
	
	for(i = 0; i < 5; i++){
		 
		printf("%d ", vetor[i]);
	}
}
