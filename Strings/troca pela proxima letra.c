#include<stdio.h>
#include<ctype.h>

int main(void){
	
	int i;
	char str[30];
	scanf(" %[^\n]s", str);
	
	for(i = 0; str[i] != '\0'; i++){
		
		if(str[i] != ' ' && str[i] != 'z'){
			printf("%c", toupper(str[i]) + 1);
		}else if(str[i] == 'z'){
			printf("A");
		}else{
			printf(" ");
		}
	}	
}
