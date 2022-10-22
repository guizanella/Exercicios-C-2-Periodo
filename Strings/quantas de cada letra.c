#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(void){
	
	char texto[30], letras[30] = {'\0'};
	int qtd_letras[30], i, j, n, encontradas;
	
	scanf("%s", texto);
	
	for(i = 0; texto[i] != '\0'; i++){
		
		if(strlen(letras) == 0){
			
			letras[0] = texto[i];
			letras[1] = '\0';
			qtd_letras[0] = 1;
			
		}else{
			encontradas = 0;
			
			for(j = 0; letras[j] != '\0'; j++){
				
				if(letras[j] == texto[i]){
					qtd_letras[j] += 1;
					encontradas = 1;
				}
			}
			
			if(encontradas == 0){
				n = strlen(letras);
				letras[n] = texto[i];
				letras[n + 1] = '\0';
				qtd_letras[n] = 1;
			}
		}
	}
	
	for(i = 0; letras[i] != '\0'; i++){
		
		printf("%c - %d\n", letras[i], qtd_letras[i]);
	}
	
}
