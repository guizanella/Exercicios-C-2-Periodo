#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Pessoa{
	int cod;
	char nome[50];
	float salario;	
}pessoa;

int main(void){	
	
//	Abrindo arquivo:
	
	FILE *arq1;
	arq1 = fopen("Arquivos//2 - Arquivo.bin", "rb");
	
	if(arq1 == NULL){
		printf("Erro ao abrir o arquivo.");
		exit(1);
	}
	
	pessoa p1;
	
	fread(&p1, sizeof(pessoa), 1, arq1);
	
	printf("Cod: %d \nNome: %s \nSalario: %.2f", p1.cod, p1.nome, p1.salario);
	
	fclose(arq1);
}
