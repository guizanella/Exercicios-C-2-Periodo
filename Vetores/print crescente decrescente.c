#include<stdio.h>

int main(void){
	
	int n, i;
	scanf("%d", &n);
	
	double x[n];
	
	for(i = 0; i < n; i++){
		
		scanf("%lf", &x[i]);
	}
	
	for(i = 0; i < n; i++){
		
		printf("V[%d] = %.1lf \n", i, x[i]);
	}
	
	for(i = (n - 1); i >= 0; i--){
		
		printf("V[%d] = %.1lf \n", i, x[i]);
	}
}
