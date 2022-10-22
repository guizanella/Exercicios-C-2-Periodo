#include<stdio.h>

int main(void){
	
	int n, i;
	
	scanf("%d", &n);
	int x[n];
	
	for(i = 0; i < n; i++){
		
		do{
			scanf("%d", &x[i]);
			
			if(x[i] < 0 || x[i] > 9){
				printf("Valor invalido! Digite um numero entre 0 e 9. \n");
			}
			
		}while(x[i] < 0 || x[i] > 9);	
	}
	
	int j = n - 1, sequencia = 1;
	
	for(i = 0; i < n; i++){
		
		if(x[i] != x[j]){
			sequencia = 0;
		}

		j--;
	}
	
	if(sequencia == 1){
		printf("Mesma sequencia!");
	}else{
		printf("Sequencias diferentes.");
	}
}
