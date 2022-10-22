#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void Gravar_Itens(void){
	
	FILE *arq;
	arq = fopen("Arquivos//5 - Arquivo.txt", "a");

	if(arq == NULL){
		printf("Erro ao abrir o arquivo.\n");
  		exit(1);
	}
	
	char item[20];
	int retorno;
	
	printf("Informe o item a ser anotado. Para encerrar, digite FIM: ");
	
	while(1){
    	scanf(" %[^\n]s", item);
    	
    	if(strcmp(item, "FIM") == 0){
    		break;	
		}
       	
       	strcat(item, "\n");
       	
    	retorno = fputs(item, arq); 

		if(retorno == EOF){
			printf("Erro ao escrever o arquivo.\n");
    		break;
		}
	}
	
	fclose(arq);
}

void Ler_Lista(void){
	
	FILE *arq;
	arq = fopen("Arquivos//5 - Arquivo.txt", "r");
	
	if(arq == NULL){
		printf("Erro ao abrir o arquivo. \n");
  		exit(1);
	}
	
	char item[20];
	
	fgets(item, 20, arq);
	
	while(!feof(arq)){
		printf("%s", item);
		fgets(item, 80, arq);
	}
	
	fclose(arq);
	system("pause");
}

void Limpar_Lista(void){
	
	FILE *arq;
	arq = fopen("Arquivos//5 - Arquivo.txt", "w");
	
	if(arq == NULL){
		printf("Erro ao abrir o arquivo.\n");
		exit(1);
  	}
  	
  	fclose(arq);
}

int main(){  
	setlocale(LC_ALL, "Portuguese");

	int opcao;
	
	do{
    	system("cls");
		printf("MENU:\n");
    	printf("1 - Gravar itens de compra\n");
    	printf("2 - Ler lista de compras\n");
    	printf("3 - Limpar a lista de compras\n");
    	printf("0 - Encerrar o Programa\n");
    	printf("-----------------------------\n");
    	printf("Informe a opcao desejada:\n");
    
		do{
      		scanf("%d", &opcao);
      		
      		if((opcao < 0) || (opcao > 3)){
      			printf("Opcao invalida! Tente novamente. \n");	
			}
    	}while((opcao < 0) || (opcao > 3));
    
    	switch(opcao){
			case 1: Gravar_Itens(); break;
     		case 2: Ler_Lista(); break;
      		case 3: Limpar_Lista(); break;
   		}
   		
  	}while(opcao != 0);
}
