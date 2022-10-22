#include<stdio.h>

int main(void){
	
	int n, i, j, k;
	
	scanf("%d", &n);
	
	float matriz1[n][n], matriz2[n][n], matriz_mult[n][n], matriz_aux = 0;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%f", &matriz1[i][j]);
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			matriz2[i][j] = matriz1[i][j];
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			for(k = 0; k < n; k++){
				
				matriz_aux += (matriz1[i][k]) * (matriz2[k][j]);
			}
			matriz_mult[i][j] = matriz_aux;
			matriz_aux = 0;
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%.1f ", matriz_mult[i][j]);
		}
		printf("\n");
	}	
}
