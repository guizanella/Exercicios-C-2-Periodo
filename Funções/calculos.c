#include<stdio.h>

int cubo(int x);
int quadrado(int x);
int multiplica(int c, int x);
int pol_cubo(int a, int b, int c, int d, int x);

int main(void){
	
	int i, n;
	int a, b, c, d, x;
    
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
   		scanf("%d %d %d %d %d", &a, &b, &c, &d, &x);
   		printf("%d %d %d %d\n", cubo(x), quadrado(x), multiplica(c,x), pol_cubo(a, b, c, d, x));
	}	
}

int cubo(int x){
	int res;
	res = x * x * x;
	return res;
}

int quadrado(int x){
	int res;
	res = x * x;
	return res;
}

int multiplica(int c, int x){
	int res;
	res = c * x;
	return res;
}

int pol_cubo(int a, int b, int c, int d, int x){
	
	int res;
	res = (a * cubo(x)) + (b * quadrado(x)) + (c * x) + d;
	return res;
}
