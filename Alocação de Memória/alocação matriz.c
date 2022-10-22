#include<stdio.h>
#include<stdlib.h>

int** aloca_matriz(int n){
	int i;
	int** m = NULL;
	
	m = (int**) malloc(n * sizeof(int*));
	
	if(m == NULL){
		return NULL;
	}
	
	for(i = 0; i < n; i++){
		m[i] = (int*) malloc(n * sizeof(int));
		
		if(m[i] == NULL){
			
			while(i){
				i--;
				free(m[i]);
			}
			free(m);
			return NULL;
		}
	}
	return m;
} 

void preenche_matriz(int** m, int n){
	int i, j; 
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			m[i][j] = rand()%11; 
		}
	}
}

void print_matriz(int **m, int n){
	int i, j; 
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
}

void libera_matriz(int** m, int n){
	int i;
	
	for(i = 0; i < n; i++){
		free(m[i]);
	}
	free(m);
}

int main(){
	
	int n;
	int **mat;
	
	printf("Informe o tamanho da matriz: ");
	scanf("%d", &n);
	
	mat = aloca_matriz(n);
	
	if(mat == NULL){
		printf("\n\nErro ao alocar memoria.");
	}else{
		preenche_matriz(mat, n);
		print_matriz(mat, n);
		libera_matriz(mat, n);
		printf("\n...\n\nMemoria liberada!");
	}
	return 0;
}
