#include<stdio.h>

int contaCharRec(char *s, char c){
	
	if(s[0] == '\0'){
		return 0;
	}
	
	if(s[0] == c){
		return 1 + contaCharRec(s + 1, c);
	}
	
	return contaCharRec(s + 1, c);
}

int main(void){
	
	char texto[100], c;
	int total = 0;
	
	printf("Texto: ");
	scanf(" %s", texto);
	
	printf("Caractere: ");
	scanf(" %c", &c);
	
	total = contaCharRec(texto, c);
	
	printf("%d ocorrencias.", total);
}
