#include<stdio.h>
#include<stdlib.h>

int** matriz_irregular(int n, int *v){
	int i, j;
	int** m = NULL;
	
	m = (int**) malloc(n * sizeof(int*)); 
	
	if(m == NULL){
		return NULL;
	}
	
	for(i = 0; i < n; i++){
		m[i] = (int*) malloc(v[i] * sizeof(int));
	
		if(m[i] == NULL){
			
			while(i){
				i--;
				free(m[i]);
			}
			free(m);
			return NULL;
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < v[i]; j++){
			m[i][j] = v[i];
		}
	}
	
	return m;
}

int main(void){
	
	int **m, n, i, j;
	scanf("%d", &n);
	
	int vetor[n];
	for(i = 0; i < n; i++){
		scanf("%d", &vetor[i]);
	}
	
	m = matriz_irregular(n, vetor);
	
	for(i = 0; i < n; i++){
		for(j = 0; j < vetor[i]; j++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}
