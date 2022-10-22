#include<stdio.h>

int main(void){
	
	int n, i, pos = -1;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n); 
	printf("\n");
	
	float x[n], v;
	
	for(i = 0; i < n; i++){
		scanf("%f", &x[i]);
	}
	
	printf("Digite o valor a ser pesquisado: ");
	scanf("%f", &v);
	printf("\n");
	
	for(i = 0; i < n; i++){
		if(x[i] == v){
			pos = i;
			printf("Encontrado na posicao %d", i);
			break;
		}
	} 
	
	if(pos == -1){
		printf("Valor nao esta armazenado no vetor.");
	}
}
