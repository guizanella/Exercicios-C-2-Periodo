#include<stdio.h>
#include<string.h>

typedef struct data{
	int dia, ano;
	char mes[12];
} DATA;

typedef struct pessoa{
	char nome[100];
	int idade;
	float salario;
	DATA nasc;
} PESSOA;

void ler(PESSOA *x){
	
	gets((*x).nome);
	scanf( "%d", &(*x).idade);
	scanf(" %f", &x->salario);
	scanf(" %d", &(*x).nasc.dia);
	scanf(" %s", &x->nasc.mes);
	scanf(" %d", &(*x).nasc.ano);
}

void mostrar(PESSOA x){
	
	printf("Nome: %s \n", x.nome);
	printf("Idade: %d \n", x.idade);
	printf("Salario: %.2f \n", x.salario);
	printf("Data de nascimento: %d de %s de %d \n", x.nasc.dia, x.nasc.mes, x.nasc.ano);
}

int main(void){
	
	PESSOA mulher;
	
	ler(&mulher);
	mostrar(mulher);
}
