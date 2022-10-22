#include<stdio.h>
#include<locale.h>

typedef struct endereco{
	char rua[30], cidade[15], estado[15];
	int numero;
} endereco;

typedef struct cliente{
	int id;
	char nome[15];
	char telefone[18];
	endereco ender;
} cliente;

void ler_cliente(cliente *pessoas, int n){
	int i;
	
	for(i = 0; i < n; i++){
		scanf(" %d", &(pessoas[i]).id);
		scanf(" %[^\n]s", (pessoas[i]).nome);
		scanf(" %[^\n]s", (pessoas[i]).ender.rua);
		scanf(" %[^\n]s", (pessoas[i]).ender.estado);
		scanf(" %[^\n]s", (pessoas[i]).ender.cidade);
		scanf(" %d", &(pessoas[i]).ender.numero);
		scanf(" %[^\n]s", (pessoas[i]).telefone);
	}
}

void buscar_cliente(cliente *pessoas, int n){
	setlocale(LC_ALL, "Portuguese");
	
	int busca, i;
	scanf("%d", &busca);
	
	i = busca - 1;
	
	printf("%d - %s \n", pessoas[i].id, pessoas[i].nome);
	printf("%s, %d \n", pessoas[i].ender.rua, pessoas[i].ender.numero);
	printf("%s - %s \n", pessoas[i].ender.cidade, pessoas[i].ender.estado);
	printf("Tel: %s", pessoas[i].telefone);
}

int main(void){
	
	cliente pessoas[3];
    ler_cliente(pessoas, 3);
    buscar_cliente(pessoas, 3);
}
