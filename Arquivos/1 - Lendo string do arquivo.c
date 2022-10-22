#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){	
	
//	Abrindo arquivo:
	
	FILE *arq1;
	arq1 = fopen("Arquivos//1 - Arquivo.txt", "r");
	
	if(arq1 == NULL){
		printf("Erro ao abrir o arquivo.");
		exit(1);
	}
	
	
//	Lendo string do arquivo:

	char linha[100];
	
	while(fgets(linha, 100, arq1) != NULL){
		printf("%s", linha);
	}
	
	fclose(arq1);
}
