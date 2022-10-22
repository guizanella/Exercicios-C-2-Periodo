#include<stdio.h>
#include<string.h>

int main(void){
	
	char frase1[50], frase2[50];
	
	scanf(" %[^\n]s", frase1);
	scanf(" %[^\n]s", frase2);
	
	strcat(frase1, " ");
	strcat(frase1, frase2);
	
	printf("%s", frase1);	
}

