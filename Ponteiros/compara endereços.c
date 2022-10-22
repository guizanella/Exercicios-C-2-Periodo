#include<stdio.h>

int main(void){
	
	int a, b;
	int *end_a, *end_b;
	
	end_a = &a;
	end_b = &b;
	
	printf("Insira o valor de A: ");
	scanf("%d", &a);
	
	printf("\nInsira o valor de B: ");
	scanf("%d", &b);
	
	if(end_a > end_b){
		printf("\nEndereco de A (%d) > Endereco de B (%d)", end_a, &b);
	}else{
		printf("\nEndereco de A (%d) < Endereco de B (%d)", &a, end_b);
	}
}
