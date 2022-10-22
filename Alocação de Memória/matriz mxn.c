#include<stdio.h>
#include<stdlib.h>

int** aloca_matriz(int m, int n){
	int i;
	int** al = NULL;
	
	al = (int**) malloc((m + n) * sizeof(int*));
	
	if(al == NULL){
		return NULL;
	}
	
	for(i = 0; i < (m + n); i++){
		al[i] = (int*) malloc((m + n) * sizeof(int));
		
		if(al[i] == NULL){
			
			while(i){
				i--;
				free(al[i]);
			}
			free(al);
			return NULL;
		}
	}
	return al;
}

int main(void){
	
	int **p;
	int m, n, i, j;
	
	scanf("%d %d",&m, &n);
	
	p = aloca_matriz(m, n);
	
	for (i = 0; i < m; i++) {
   		for (j = 0; j < n; j++) {
       		p[i][j] = (i*m) + (j+1);
   		}
	}
	
	for (i = 0; i < m; i++) {
   		for (j = 0; j < n; j++) {
   	    	printf("%d ", p[i][j]);
  			}
   		printf("\n");
	}
}
