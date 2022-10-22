#include<stdio.h>
#include<time.h>

int main(void){
	
	int i, j, diag_pri = 0, diag_sec = 0;
	
	int matriz[6][6];
	
	for(i = 0; i < 6; i++){
		
		for(j = 0; j < 6; j++){
			matriz[i][j] = rand()%11;
		}
	}
	
	
	for(i = 0; i < 6; i++){
		
		for(j = 0; j < 6; j++){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 6; i++){
		diag_pri += matriz[i][i];
	}
	
	for(i = 5; i >= 0; i--){

		for(j = 0; j < 6; j++){
			if(i + j == 5){
				diag_sec += matriz[j][i];
			}
		}
	}
	
	printf("Soma Diagonal Principal: %d \n", diag_pri);
	printf("Soma Diagonal Secundaria: %d \n", diag_sec);
}
