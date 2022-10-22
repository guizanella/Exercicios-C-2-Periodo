#include<stdio.h>

int main(void){
	
	int n, i, j, consultas, casa = 0;
	scanf("%d", &n);
	
	int x[n], pesquisa[consultas];
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &x[i]);
	}
	
	scanf("%d", &consultas);
	
	for(i = 0; i < consultas; i++){
		
		scanf("%d", &pesquisa[i]);
	}
	
	for(i = 0; i < consultas; i++){
		
		for(j = 0; j < n; j++){
			
			if(pesquisa[i] == x[j]){
				
				printf("%d \n", j);
				casa++;
				break;
				
			}else{
				casa = 0;
			}
		}
		
		if(casa == 0){
			
			printf("NOT FOUND \n");
		}
	}
}
