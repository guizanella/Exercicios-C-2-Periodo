#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){	
	
//	Abrindo arquivo:
	
	FILE *arq1;
	arq1 = fopen("Arquivos//3 - Arquivo.txt", "r");
	
	if(arq1 == NULL){
		printf("Erro ao abrir o arquivo.");
		exit(1);
	}

	char nome[50], texto[50];
	int idade = 18;
	float altura = 1.81;
	
	fscanf(arq1, "%s %[^\n]s", texto, nome);
	printf("%s %s \n", texto, nome);
	fscanf(arq1, "%s %d", texto, &idade);
	printf("%s %d \n", texto, idade);
	fscanf(arq1, "%s %f", texto, &altura);
	printf("%s %.2f \n", texto, altura);

	fclose(arq1);
}
