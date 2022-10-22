#include<stdio.h>

void print_valor(int *pto, char nome);
void print_endereco(int *pto, char nome);
void print_ponteiro(int *pto, char nome);

int main(void){
	
	int n;
	int *p;
	scanf("%d", &n);
	p = &n;
	
	printf("\na) \n\n");
	
	printf("Valor de n: %d \n", n);
	printf("Endereco de memoria de n: %d \n\n", &n);
	
	print_ponteiro(p, 'p');
	
	
	int *q;
	q = p;
	
	printf("\nb) \n\n");
	
	print_ponteiro(p, 'p');
	print_ponteiro(q, 'q');
	
	
	*p += 1;
	
	printf("\nc) \n\n");
	
	print_ponteiro(p, 'p');
	print_ponteiro(q, 'q');
	
	
	int m;
	scanf("%d", &m);
	q = &m;
	
	printf("\nd) \n\n");
	
	print_ponteiro(p, 'p');
	print_ponteiro(q, 'q');
	
	p = q;
	
	printf("\ne) \n\n");
	
	print_ponteiro(p, 'p');
	print_ponteiro(q, 'q');
}

void print_valor(int *pto, char nome){
	printf("Valor apontado por %c = %d \n", nome, *pto);
}

void print_endereco(int *pto, char nome){
	printf("Endereco apontado por %c = %d \n\n", nome, pto);
}

void print_ponteiro(int *pto, char nome){
	print_valor(pto, nome);
	print_endereco(pto, nome);
};
