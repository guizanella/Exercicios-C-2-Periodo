#include<stdio.h>

void ordenar(int *p1, int *p2, int *p3){
	
	if(*p1 >= *p2 && *p1 >= *p3){
		if(*p2 > *p3){
			printf("%d %d %d", *p3, *p2, *p1);
		}else{
			printf("%d %d %d", *p2, *p3, *p1);
		}
	}else if(*p2 >= *p1 && *p2 >= *p3){
		if(*p1 > *p3){
			printf("%d %d %d", *p3, *p1, *p2);
		}else{
			printf("%d %d %d", *p1, *p3, *p2);
		}
	}else if(*p3 >= *p1 && *p3 >= *p2){
		if(*p1 > *p2){
			printf("%d %d %d", *p2, *p1, *p3);
		}else{
			printf("%d %d %d", *p1, *p2, *p3);
		}
	}
}

int main(void){
	
	int a, b, c;
	
	a = 1;
	b = 2;
	c = 3;
	
	ordenar(&a, &b, &c);
}


