#include<stdio.h>
#include <string.h>

int main(void){
	
	int i;
	char palavra[50];
	
	scanf(" %[^\n]s", palavra);
	
	for(i = (strlen(palavra) - 1); i >= 0; i--){
		
		printf("%c", palavra[i]);
	}
	
}
