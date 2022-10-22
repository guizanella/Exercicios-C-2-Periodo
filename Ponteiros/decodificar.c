#include<stdio.h>

void decodificar(int vet[], int tam, char str[]){
	
	int i;
	
	printf("%c", str[vet[0]]);
	
	for(i = 0; i < (tam - 1); i++){
		printf("%c", str[ vet[i] + vet[i + 1] ]);
		vet[i + 1] += vet[i]; 
	}
}

int main(void){
	
	char frase[62] = "the quick brown fox jumps over the lazy dog";
	
	int n = 5;
	
	int v[5] = {24, -1, -11, -1, -3};
	
	decodificar(v, n, frase);
}
