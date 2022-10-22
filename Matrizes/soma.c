#include<stdio.h>

int main(void){
	
	int i, j, n;
	
	scanf("%d", &n);
	
	float matriz[n][n];
	
	for(i = 0; i < n; i++){
		
		for(j = 0; j < n; j++){
			scanf("%f", &matriz[i][j]);
		}
	}
	
	for(i = 0; i < n; i++){
		
		for(j = 0; j < n; j++){
			printf("%.1f ", matriz[i][j] + matriz[i][j]);
		}
		printf("\n");
	}
}
