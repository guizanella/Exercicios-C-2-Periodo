#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){	
	
//	Abrindo arquivo:
	
	FILE *arq1;
	arq1 = fopen("Arquivos//1 - Arquivo.txt", "w");
	
	if(arq1 == NULL){
		printf("Erro ao abrir o arquivo.");
		exit(1);
	}
	
	
//	Escrevendo string do arquivo:

	char frase[50] = "Teste arquivos :)";
	
	int retorno = fputs(frase, arq1);
	
	if(retorno == EOF){
		printf("Erro ao escrever arquivo.");
	}
	
	fclose(arq1);
}
