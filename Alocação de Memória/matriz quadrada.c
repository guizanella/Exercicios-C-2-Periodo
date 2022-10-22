#include<stdio.h>
#include<stdlib.h>

int** aloca_matriz_quadrada(int n){
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

int main(void){
	
	int n, i, j, **p;
	
	scanf("%d", &n);
	        
	p = aloca_matriz_quadrada(n);  
	  
	for (i = 0; i < n; i++) {
    	for (j = 0; j < n; j++) {
        	p[i][j] = (i*n) + (j+1);
    	}
	}
	
	for (i = 0; i < n; i++) {
    	for (j = 0; j < n; j++) {
        	printf("%d ", p[i][j]);
    	}
    	printf("\n");
	}
}
