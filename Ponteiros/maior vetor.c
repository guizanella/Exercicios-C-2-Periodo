#include<stdio.h>

double* max(double v[], int tam){
	
	int i;
	double aux = 0, *maior = 0;
	
	for(i = 0; i < tam; i++){
		if(v[i] > aux){
			aux = v[i];	
		}
	}
	maior = &aux;
	return maior;
}

int main(void){
	
	double v[5]={2.6, 13.2, 1.65, 0.99, 11.9};
	
	double *p_max;
	
	p_max = max (v, 5);
	
	printf("%.2lf\n", *p_max);
}
