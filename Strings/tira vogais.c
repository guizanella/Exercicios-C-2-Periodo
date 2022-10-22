#include<stdio.h>
#include<string.h>

int main(void){
	
	int i;
	char frase[50];
	
	scanf(" %[^\n]s", frase);

	for(i = 0; frase[i] != '\0'; i++){
		
		switch(frase[i]){
			case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':{
				frase[i] = '_';
				break;
			}
		}	
	}	
	
	printf("%s", frase);
}

