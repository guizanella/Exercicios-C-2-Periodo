#include<stdio.h>

typedef struct data_s{
	int dia, mes, ano;
} data_t;

typedef struct pessoa_s{
	int cod;
	char nome[64];
	data_t nasc;
} pessoa_t;

void read_person(pessoa_t *p){
	scanf("%d", &(*p).cod);
	scanf(" %[^\n]s", (*p).nome);
	scanf(" %d", &(*p).nasc.dia);
	scanf(" %d", &(*p).nasc.mes);
	scanf(" %d", &(*p).nasc.ano);
}

void print_person(pessoa_t p){
	printf("%d - %s \n", p.cod, p.nome);
	printf("Nascimento: %d/%d/%d", p.nasc.dia, p.nasc.mes, p.nasc.ano);
}

int main(void){
	
	pessoa_t p;
	read_person(&p);
	print_person(p);
}
