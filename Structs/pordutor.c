#include<stdio.h>
#include<stdlib.h>

struct produtor_t{
	
	int codigo;
	char grao;
	float quantidade;
};

void le_graos(struct produtor_t *prod){
	
	printf("\nInforme o codigo do produtor: ");
	scanf("%d", &(*prod).codigo);
	
	printf("Informe o grao (F, M, S, T): ");
	scanf(" %c", &prod->grao);
	
	printf("Infome a quantidade de toneladas: ");
	scanf(" %f", &(*prod).quantidade);
}

void imprime_totais(struct produtor_t *prod, int n){
	int i;
	float toneladasF = 0, toneladasM = 0, toneladasS = 0, toneladasT = 0;
	
	for(i = 0; i < n; i++){
		
		switch(prod[i].grao){
			case 'T': toneladasT += prod[i].quantidade; break;
			case 'M': toneladasM += prod[i].quantidade; break;
			case 'S': toneladasS += prod[i].quantidade; break;
			case 'F': toneladasF += prod[i].quantidade; break;
		}
	}
	
	printf("\nTotal de toneldas dos produtos:\n");
	printf("Trigo: %.2f \n", toneladasT);
	printf("Milho: %.2f \n", toneladasM);
	printf("Soja: %.2f \n", toneladasS);
	printf("Feijao: %.2f \n", toneladasF);
}

int main(void){
	
	int n, i;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &n);
	
	struct produtor_t entrada[n];
	
	for(i = 0; i < n; i++){
		le_graos(&entrada[i]);
	}
	
	imprime_totais(entrada, n);
}
