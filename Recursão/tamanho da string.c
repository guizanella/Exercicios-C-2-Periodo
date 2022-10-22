#include<stdio.h>

int lenRecursiva(char *texto){
	
	if(texto[0] == '\0'){
		return 0;
	}
	
	return 1 + lenRecursiva(texto + 1);
}

int main(void){
	
	char texto[100];
	int tam = 0;
	
	scanf(" %s", texto);
	
	tam = lenRecursiva(texto);
	
	printf("%d", tam);	
}
