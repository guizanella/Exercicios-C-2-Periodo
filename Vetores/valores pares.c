#include<stdio.h>

int main(void){
	
	int n, i;
	scanf("%d", &n);
	int x[n];
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &x[i]);
	}
	
	for(i = 0; i < n; i++){
		
		if(x[i] % 2 == 0){
			printf("V[%d] = %d \n", i, x[i]);
		}
	}
}
