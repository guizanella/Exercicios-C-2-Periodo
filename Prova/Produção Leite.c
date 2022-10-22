#include<stdio.h>

struct vaca{
	char nome[20];
	float litrosManha, litrosTarde;
};

void ler_leite(struct vaca *vc, int n){
	int i;
	
	for(i = 0; i < n; i++){
		scanf(" %[^\n]s", &vc[i].nome);
		scanf(" %f", &vc[i].litrosManha);
		scanf(" %f", &vc[i].litrosTarde);
	}
}

void mostrar_producao(struct vaca *vc, int n){
	int i; 
	float total_vaca = 0, total_dia = 0, media = 0;
	
	for(i = 0; i < n; i++){
		total_vaca = (vc[i].litrosManha + vc[i].litrosTarde);
		printf("%s - litros manha: %.1f, litros tarde: %.1f - Total no dia: %.1f \n", vc[i].nome, vc[i].litrosManha, vc[i].litrosTarde, total_vaca);
		
		total_dia += total_vaca;
		total_vaca = 0;
	}
	
	printf("Total de leite produzido no dia (litros): %.1f \n", total_dia);
	printf("Media de litros de leite produzido por animal: %.3f", total_dia / n);
}

int main(void){
	
	int n;
	scanf("%d", &n);
	
	struct vaca vc[n];
	
	ler_leite(vc, n);
	
	mostrar_producao(vc, n);
}
