#include<stdio.h>

int main(void){

	int x = 5;
	int *ptr_x;
	int **ptr_ptr_x;
	
	ptr_x = &x;
	ptr_ptr_x = &ptr_x;
	
	printf("x = %d - &x = %ld\n", x, &x);
	printf("x = %d - &x = %ld\n", *ptr_x, ptr_x);
	printf("x = %d - &x = %ld\n", **ptr_ptr_x, *ptr_ptr_x);

}
