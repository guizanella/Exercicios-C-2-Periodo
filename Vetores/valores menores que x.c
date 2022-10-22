#include<stdio.h>

int main(void){
	
	int n, i;
	scanf("%d", &n);
	float x[n], y;
	
	for(i = 0; i < n; i++){
		
		scanf("%f", &x[i]);
	}
	
	scanf("%f", &y);
	
	for(i = 0; i < n; i++){
		
		if(x[i] < y){
			printf("V[%d] = %.2f \n", i, x[i]);
		}
	}
}
