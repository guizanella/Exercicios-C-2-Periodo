#include<stdio.h>
#include<stdlib.h>

void le_matriz(int t, int mat[t][t]);
void print_matriz(int t, int mat[t][t]);
void subst_matriz(int t, int mat[t][t]);
int par_impar(int n);

int main(void){
	
	int tam;
	
	printf("Informe o tamanho da matriz: ");
	scanf("%d", &tam);
	
	int m[tam][tam];
	
	le_matriz(tam, m);
	print_matriz(tam, m);
	 subst_matriz(tam, m);
	print_matriz(tam, m);
}

void le_matriz(int t, int mat[t][t]){
	
	int i, j;
	
	printf("\nInforme %d valores para a matriz:\n", t * t);
	
	for(i = 0; i < t; i++){
		for(j = 0; j < t; j++){
			scanf(" %d", &mat[i][j]);
		}
	}
}

void print_matriz(int t, int mat[t][t]){
	
	int i, j;
	
	printf("\nMatriz:\n");
	
	for(i = 0; i < t; i++){
		for(j = 0; j < t; j++){
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
}

void subst_matriz(int t, int mat[t][t]){
	
	int i, j;
	
	for(i = 0; i < t; i++){
		for(j = 0; j < t; j++){
			mat[i][j] = par_impar(mat[i][j]);
		}
	}
}

int par_impar(int n){
	
	if(n == 0 || n % 2 == 0){
		return 0;
	}else{
		return 1;
	}
}
