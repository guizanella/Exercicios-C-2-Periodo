#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(void){
	
	setlocale(LC_ALL, "portuguese");
	
	int i, tamanho1, tamanho2, igual = 0;
	char str1[30], str2[30];
	
	scanf(" %[^\n]s", str1);
	scanf(" %[^\n]s", str2);
	
	tamanho1 = strlen(str1) - 1;
	tamanho2 = strlen(str2) - 1;
	
	for(i = 0; i <= tamanho1; i++){
		
		if(tamanho1 != tamanho2){
			
			printf("As frases são diferentes!");
			igual = 0;
			
		}else{
			igual = 1;
		}
		
		if(toupper(str1[i]) != toupper(str2[i])){
			
			printf("As frases são diferentes!");
			igual = 0;
			
		}else{
			igual = 1;
		}
	}
	
	if(igual == 1){
		
		printf("As frases são iguais!");
	}
}
