#include<stdio.h>
#include<stdlib.h>

int* aloca_vetor(int n){
	int *pto_vetor;
	
	pto_vetor = (int*) malloc (n * sizeof(int));
	
	return pto_vetor;
}

void le_elementos(int *v, int n){
	int i;
	
	for(i = 0; i < n; i++){
		scanf("%d", &v[i]);
	}
}

void print_vetor(int *v, int n){
	int i;
	float media = 0;
	
	for(i = 0; i < n; i++){
		printf("v[%d]=%d\n", i, v[i]);
		media += v[i];
	}
	printf("Media=%.2f", media / n);
}

int main(void){
	
	int n, *p; 
	   
	scanf("%d", &n);
	
	p = aloca_vetor(n);
	le_elementos(p, n);
	print_vetor(p, n);	
}
