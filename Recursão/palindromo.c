#include<stdio.h>
#include<string.h>

int palindromoRec(char *s, int posIni, int posFim){
	
	if(posIni > posFim){
		return 1;
	}
	if(s[posIni] != s[posFim]){
		return 0;
	}
	
	return palindromoRec(s, posIni + 1, posFim - 1);
}

int main(void){
	
	char str[20];
	int resposta = 0;
	
	scanf(" %s", str);
	
	resposta = palindromoRec(str, 0, strlen(str) - 1);
	
	if(resposta == 1){
		printf("Palindromo");
	}else{
		printf("Nao palindromo");
	}
}
