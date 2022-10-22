#include<stdio.h>

void desenhar(int x, int y);

int main(void){
	
	int a, b;
	
	do{
		printf("Informe o primeiro valor: ");
		scanf("%d", &a);
		printf("Informe o segundo valor: ");
		scanf("%d", &b);
		
	}while(a <= 0 || b <= 0);
	
	desenhar(a, b);
}

void desenhar(int x, int y){
	
	int i, j;
	
	for(i = 0; i < x; i++){
		
		for(j = 0; j < y; j++){
			
			printf("*");
		}
		printf("\n");
	}
	
}
