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
	arq1 = fopen("Arquivos//2 - Arquivo.bin", "wb");
	
	if(arq1 == NULL){
		printf("Erro ao abrir o arquivo.");
		exit(1);
	}
	
	pessoa p1 = {1, "Mauro Cezar", 1250.00};
	
	fwrite(&p1, sizeof(pessoa), 1, arq1);
	
	fclose(arq1);
}
