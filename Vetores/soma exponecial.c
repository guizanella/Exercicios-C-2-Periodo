#include<stdio.h>
#include<math.h>

int main(void){
	
	int n, i, s = 0;
	scanf("%d", &n);
	
	int v[n], w[n];
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &v[i]);
	}
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &w[i]);
	}
	
	for(i = 0; i < n; i++){
		
		s += pow(v[i], w[i]);
	}
	
	printf("%d", s);
}
