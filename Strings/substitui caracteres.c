#include<stdio.h>

int main(void){
	
	int i, num_sub = 0, alf_sub = 0;
	char string[100];
	
	scanf(" %[^\n]s", string);
	
	for(i = 0; string[i] != '\0'; i++){
		
		if(string[i] > 47 && string[i] < 58){
			string[i] = '*';
			num_sub++;
			
		}else if(string[i] == '@'){
			break;
			
		}else if(string[i] > 96 && string[i] < 123){
			string[i] = '_';
			alf_sub++;	
		}
		
		printf("%c", string[i]);
	}
	
	printf("\nTotal numericos substituidos: %d \n", num_sub);
	printf("Total alfabeticos substituidos: %d", alf_sub);
}
