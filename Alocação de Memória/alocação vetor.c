#include<stdio.h>
#include<stdlib.h>

int* aloca_vetor(int n){
	
	int* pto_vetor;
	
	pto_vetor = (int*) malloc (n * sizeof(int));
	
	return pto_vetor;
}

void preenche_vetor(int *v, int n){
	int i;
	
	for(i = 0; i < n; i++){
		printf("Informe o valor do vetor [%d]: ", i);
		scanf("%d", &v[i]);
	}
}

void print_vetor(int *v, int n){
	int i;
	
	for(i = 0; i < n; i++){
		printf("%d ", v[i]);
	}
}

void libera_vetor(int *v){
	free(v);
	printf("\n\nVetor Liberado!");
}

int main(void){
	
	int n;
	int *ptv = NULL;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &n);
	
	ptv = aloca_vetor(n);
	
	if(ptv == NULL){
		printf("\n\nErro ao alocar a memória.");
	}else{
		preenche_vetor(ptv, n);
		print_vetor(ptv, n);
		libera_vetor(ptv);	
	}
}
