#include<stdio.h>

int main(void){
	
	int n, i;
	scanf("%d", &n);
	
	int v[n];
	char str[65];
	
	for(i = 0; i < n; i++){
		scanf(" %d", &v[i]);
	}
	
	scanf(" %[^\n]s", str);
	
	for(i = 0; i < n; i++){
		
		printf("%c", str[v[i]]);
	}
}
