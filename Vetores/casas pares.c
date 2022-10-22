#include<stdio.h>

int main(void){
	
	int n, i, tam_y, j = 0;
	
	scanf("%d", &n);
	int x[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &x[i]);
	}
	
	if(n % 2 == 0){
		tam_y = n / 2;
	}else{
		tam_y = (n / 2) + 1;
	}
	
	int y[tam_y];
	
	for(i = 0; i < n; i++){
		
		if(i % 2 == 0){
			y[j] = x[i];
			printf("Y[%d] = %d\n", j, y[j]);
			j++;
		}
	}
	
	return 0;
}
