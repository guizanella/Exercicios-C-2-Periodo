#include<stdio.h>

int comp(double x, double y){
	
	if(x > y){
		return 1;
	}else if(y > x){
		return -1;
	}else{
		return 0;
	}
}

int main(){
	
	int i, n;
	double a, b;
    
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		
    	scanf("%lf %lf", &a, &b);
   		printf("%d\n", comp(a, b));
	}
}


