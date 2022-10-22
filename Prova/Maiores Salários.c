#include <stdio.h>
#include <stdlib.h>

typedef struct func {
	char id;
	float vendas;
	int filial;
} func;

struct func* alocar_ler(int n){
	int i;
	int* pto;
	
	struct func *funcio;
	
	funcio = (func*) malloc (n * sizeof(func));
	
	for(i = 0; i < n; i++){
		scanf(" %c", &funcio[i].id);
		scanf(" %f", &funcio[i].vendas);
		scanf(" %d", &funcio[i].filial);
	}
	
	return funcio;
}

void imprimir(int n, func *funcionarios){
	int i;
	
	printf("Funcionarios: \n");
	for(i = 0; i < n; i++){
		printf("%c %.2f %d \n", funcionarios[i].id, funcionarios[i].vendas, funcionarios[i].filial);
	}
}

void imprimir_maior_salario_filial(int n, func *funcionarios){
	int i;
	float maior1 = 0, maior2 = 0, maior3 = 0;
	
	for(i = 0; i < n; i++){
		if(funcionarios[i].filial == 1){
			if(funcionarios[i].vendas > maior1){
				maior1 = funcionarios[i].vendas;
			}
		}
		
		if(funcionarios[i].filial == 2){
			if(funcionarios[i].vendas > maior2){
				maior2 = funcionarios[i].vendas;
			}
		}
		
		if(funcionarios[i].filial == 3){
			if(funcionarios[i].vendas > maior3){
				maior3 = funcionarios[i].vendas;
			}
		}
	}
	
	printf("Maiores Salarios: \n");
	printf("Filial 1 = %.2f \n", maior1);
	printf("Filial 2 = %.2f \n", maior2);
	printf("Filial 3 = %.2f \n", maior3);
}

int main(void){
	int n;
	func *funcionarios = NULL;
	
	scanf("%d", &n);
	
	funcionarios = alocar_ler(n);
	
	imprimir(n,funcionarios);
	
	imprimir_maior_salario_filial(n, funcionarios);
}
