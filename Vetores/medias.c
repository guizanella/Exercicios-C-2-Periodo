#include<stdio.h>

int main(void){
	
	int alunos, i;
	
	printf("Informe a quantidade de alunos: \n");
	scanf("%d", &alunos);

	float nota1[alunos], nota2[alunos], nota3[alunos], media[alunos];
	
	for(i = 0; i < alunos; i++){
		printf("Aluno %d: \n", i);
		printf("Nota 1: ");
		scanf(" %f", &nota1[i]); 
		
		printf("Nota 2: ");
		scanf(" %f", &nota2[i]);
		
		printf("Nota 3: ");
		scanf(" %f", &nota3[i]); 
		
		media[i] = ( nota1[i] + nota2[i] + nota3[i] ) / 3;
		
		printf("Media do aluno %d: %.1f \n\n", i, media[i]);
	}
	
}
