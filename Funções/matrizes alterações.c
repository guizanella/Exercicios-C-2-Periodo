#include<stdio.h>

int processaMatriz(int l, int c, int x, int matriz[3][3]){
	
	int alter = 0, i, j;
	
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			
			if(matriz[i][j] > x){
				matriz[i][j] = 0;
				alter++;
			}
		}
	}
	return alter;
}

void printMatriz(int l, int c, int matriz[3][3]){
	
	int i, j;
	
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int main(void){
	
	int i, j, x, alteracoes = 0, matriz[3][3];
		
	scanf("%d",&x);
	
	for(i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			
			scanf(" %d", &matriz[i][j]);
		}
	}
	
	alteracoes = processaMatriz(3, 3, x, matriz);
	
	printMatriz(3, 3, matriz);
	printf("Alteracoes=%d", alteracoes);
}

