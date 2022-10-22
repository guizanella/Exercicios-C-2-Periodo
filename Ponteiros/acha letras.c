#include<stdio.h>

char* achar(char *ptr, char frase[62]){
	
	int i = 0, tam = 0;
	
	
	for(i = 0; frase[i] != '\0'; i++){
		tam++;
	}
	
	for(i = *ptr; i < tam; i++){
		
		if(frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'e' || frase[i] == 'E' || frase[i] == 'i' || frase[i] == 'I' || frase[i] == 'o' || frase[i] == 'O' || frase[i] == 'u' || frase[i] == 'U'){
			ptr = &frase[i];
			break;
		}else if(i == tam - 1){
			ptr = &frase[i];
		}
	}
	
	return ptr;
}

int main(void){
	
	int n = 0;
	
	void* p = &n;
	
	char frase[62] = "gui zanella";
	
	p = achar(p, frase);
	
	printf("%c", *(char*) p);
}
