#include<stdio.h>
#include<locale.h>

void triangular(int x);

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Informe um número: ");
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
		printf("O número é triangular.");
	}else{
		printf("O número não é triangular.");
	}
}
