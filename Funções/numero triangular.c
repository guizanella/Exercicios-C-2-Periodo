#include<stdio.h>
#include<locale.h>

void triangular(int x);

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Informe um n�mero: ");
	scanf("%d", &n);
	
	triangular(n);
}

void triangular(int x){
	
	int i, soma = 0;
	
	for(i = 0; i < x;){
		
		soma += 1;
		i += soma;
	}
	
	if(i == x){
		printf("O n�mero � triangular.");
	}else{
		printf("O n�mero n�o � triangular.");
	}
}
