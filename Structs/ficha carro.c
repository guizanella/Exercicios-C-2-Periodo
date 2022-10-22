#include<stdio.h>
#include<stdlib.h>

struct veiculo_t{
	
	int numero, ano;
	char proprietario[40], modelo[20]; 
	char cor[10], placa[8], combustivel[10];
};

struct veiculo_t le_veiculo(){
	
	struct veiculo_t v;
	
	printf("Informe o numero do veiculo: ");
	scanf("%d", &v.numero);
	
	printf("Informe o ano do veiculo: ");
	scanf(" %d", &v.ano);
	
	printf("Informe o proprietario do veiculo: ");
	scanf(" %[^\n]s", v.proprietario);
	
	printf("Informe o modelo do veiculo: ");
	scanf(" %[^\n]s", v.modelo);
	
	printf("Informe a cor do veiculo: ");
	scanf(" %[^\n]s", v.cor);
	
	printf("Informe a placa do veiculo: ");
	scanf(" %[^\n]s", v.placa);
	
	printf("Informe o combustivel do veiculo: ");
	scanf(" %[^\n]s", v.combustivel);
	
	return v;
}

void imprime_veiculo(struct veiculo_t v){
	
	printf("Numero: %d\n", v.numero);
	printf("Proprietario: %s\n", v.proprietario);
	printf("Modelo: %s\n", v.modelo);
	printf("Placa: %s\n", v.placa);
	printf("Ano: %d\n", v.ano);
	printf("Combustivel: %s\n", v.combustivel);
	printf("Cor: %s\n", v.cor);
}

int main(void){
	struct veiculo_t ficha;
	
	ficha = le_veiculo();
	
	imprime_veiculo(ficha);
}
