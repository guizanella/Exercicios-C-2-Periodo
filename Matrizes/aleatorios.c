#include<stdio.h>
#include<time.h>

int main(void){
	
	int i, j;
	
	int matriz[5][5];
	
	for(i = 0; i < 5; i++){
		
		for(j = 0; j < 5; j++){
			matriz[i][j] = 10 + rand()%91;
		}
	}
	
	
	for(i = 0; i < 5; i++){
		
		for(j = 0; j < 5; j++){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
}
