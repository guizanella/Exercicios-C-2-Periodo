#include<stdio.h>

int main(void){
	
	int i;
	char palavra[50];
	
	scanf(" %[^\n]s", palavra);
	
	for(i = 0; palavra[i] != '\0'; i++){
		
		printf("%c \n", palavra[i]);
	}
	
}
