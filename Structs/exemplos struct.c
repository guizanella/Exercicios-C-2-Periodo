#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	
	
	// Declarção da estrutura:
	
	struct Data{
		int dia, ano;
		char mes[12];
//		...
	};
	
	
	
	// Declaração de variável do tipo da estrutura:
	
	struct Data hoje = {19, 2021, "Novembro"}; 
	
	struct Data natal = {25, 2021, "Dezembro"};
	
	// Declaração em vetor:
	
	struct Data pagamento[3] = {
		{5, 2022, "Janeiro"},
		{6, 2022, "Fevereiro"},
		{7, 2022, "Março"},
	};
	
	
	
	// Prints:
	
	printf("Hoje é dia %d de %s de %d.\n\n", hoje.dia, hoje.mes, hoje.ano);
	
	printf("O Natal será dia %d de %s de %d.\n\n\n", natal.dia, natal.mes, natal.ano);
	
	int i;
	
	for(i = 0; i < 3; i++){
		printf("O pagamento %d será efetuado no dia %d de %s de %d.\n", i+1, pagamento[i].dia, pagamento[i].mes, pagamento[i].ano);
	}
	
	
	
	// Typedef:
	
	typedef struct pessoa{
		int idade;
		char genero[10], cidade[25], nome[15];
		float altura;
	} PESSOA;
	
	// PESSOA substitui "struct pessoa ..."
	
	PESSOA gui = {18, "Masculino", "Dois Vizinhos", "Guilherme", 1.81};
	
	printf("\n\nNome: %s \nGenero: %s \nIdade: %d \nCidade: %s \nAltura: %.2f \n", gui.nome, gui.genero, gui.idade, gui.cidade, gui.altura);
	
	PESSOA joao = {23, "Masculino", "Curitiba", "João", 1.72};
	
	printf("\nNome: %s \nGenero: %s \nIdade: %d \nCidade: %s \nAltura: %.2f \n", joao.nome, joao.genero, joao.idade, joao.cidade, joao.altura);
	
	
	
	// Struct dentro de outro struct:
	
	typedef struct pessoa2{
		char nome[15];
		int idade;
		float altura;
		struct Data data_nasc;
	} PESSOA2;
	
	PESSOA2 pedro = {"Pedro", 43, 1.78, {10, 1978, "Agosto"}};
	
	printf("\n\nNome: %s \nAltura: %.2f \nIdade: %d \nData de nascimento: %d de %s de %d \n", pedro.nome, pedro.altura, pedro.idade, pedro.data_nasc.dia, pedro.data_nasc.mes, pedro.data_nasc.ano);

}
