#include<stdio.h>

int maxRecursivo(int *v, int n){
	
	int x;
	
	if(n == 1){
		return v[0];
	}else{
		x = maxRecursivo(v, n - 1);
		
		if(x > v[n - 1]){
			return x;
		}else{
			return v[n - 1];
		}
	}
}

int main(void){
	
	int n, i, max;
	
	scanf("%d", &n);
	
	int vet[n];
	for(i = 0; i < n; i++){
		scanf("%d", &vet[i]);
	}
	
	max = maxRecursivo(vet, n);
	
	printf("O maior numero e %d", max);
}
