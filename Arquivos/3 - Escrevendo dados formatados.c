#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){	
	
//	Abrindo arquivo:
	
	FILE *arq1;
	arq1 = fopen("Arquivos//3 - Arquivo.txt", "w");
	
	if(arq1 == NULL){
		printf("Erro ao abrir o arquivo.");
		exit(1);
	}

	char nome[50] = "Pedro da Silva";
	int idade = 21;
	float altura = 1.80;

	fprintf(arq1, "Nome: %s \nIdade: %d \nAltura: %.2f \n", nome, idade, altura);

	fclose(arq1);
}
