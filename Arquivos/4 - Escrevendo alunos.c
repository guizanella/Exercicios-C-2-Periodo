#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Aluno{
	char nome[50];
	float notas[4];
}aluno;

int main(void){
	
	int n, i, j;
	printf("Informe o numero de alunos: ");
	scanf("%d", &n);
	
	FILE *arq;
	arq = fopen("Arquivos//4 - Arquivo.bin", "wb");
	
	if(arq == NULL){
		printf("Erro ao abrir o arquivo.");
		exit(1);
	}
	
	aluno a[n];
	
	for(i = 0; i < n; i++){
		printf("\nInforme o nome do aluno %d: ", i + 1);
		scanf(" %[^\n]s", a[i].nome);
		
		for(j = 0; j < 4; j++){
			printf("Informe a %d nota do aluno %d: ", j + 1, i + 1);
			scanf(" %f", &a[i].notas[j]);
		}
	}
	
	fwrite(a, sizeof(aluno), n, arq);
	
	fclose(arq);
}
