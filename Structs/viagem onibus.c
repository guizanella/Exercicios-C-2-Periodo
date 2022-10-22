#include<stdio.h>
#include<stdlib.h>

struct passageiro_t{
	
	int passagem, poltrona;
	char origem[30], destino[30];
};

void le_passagens(struct passageiro_t *vp, int n){
	int i;
	
	for(i = 0; i < n; i++){
		printf("\nInforme o numero da passagem: ");
		scanf(" %d", &vp[i].passagem);
		
		printf("Informe a poltrona: ");
		scanf(" %d", &vp[i].poltrona);
		
		printf("Informe a origem: ");
		scanf(" %[^\n]s", vp[i].origem);
		
		printf("Informe o destino: ");
		scanf(" %[^\n]s", vp[i].destino);
	}
};

void print_passagens(struct passageiro_t *vp, int n){
	int i;
	
	printf("\nListagem de passageiros:--------\n");
	
	for(i = 0; i < n; i++){
		printf("\nNumero da passagem: %d\n", vp[i].passagem);
		printf("Numero da poltrona: %d\n", vp[i].poltrona);
		printf("Origem: %s\n", vp[i].origem);
		printf("Destino: %s\n\n", vp[i].destino);
		printf("--------------------------------\n");
	}
}

int main(void){
	
	int n;
	
	printf("Insira a quantidade de passageiros: ");
	scanf("%d", &n);
	
	struct passageiro_t onibus[n];
	
	le_passagens(onibus, n);
	print_passagens(onibus, n); 
}
