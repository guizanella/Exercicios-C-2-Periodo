#include<stdio.h>

void incrementa(int *pNum, int incremento);

int main() {
	
	int n, inc;
	int *p;
 
 	printf("Informe o numero: ");
	scanf("%d", &n);
	printf("Informe o incremento: ");
	scanf("%d", &inc);
	
	p = &n;
	
	printf("Valor de N antes do incremento: %d \n", *p);
	incrementa(p, inc);
	printf("Valor de N depois do incremento: %d \n", *p);
}

void incrementa(int *pNum, int incremento){
	
	*pNum += incremento;
}
