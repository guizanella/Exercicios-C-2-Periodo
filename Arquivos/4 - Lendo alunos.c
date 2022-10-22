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
	arq = fopen("Arquivos//4 - Arquivo.bin", "rb");
	
	if(arq == NULL){
		printf("Erro ao abrir o arquivo.");
		exit(1);
	}
	
	aluno a[n];
	
	fread(a, sizeof(aluno), n, arq);
	
	for(i = 0; i < n; i++){
		printf("Aluno: %s \n", a[i].nome);
		
		for(j = 0; j < 4; j++){
			printf("Nota %d: %.2f \n", j + 1, a[i].notas[j]);
		}
		printf("\n");
	}
	
	fclose(arq);
}
