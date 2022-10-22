#include <stdio.h>

int main(void){
	
	int v[3] = {1, 2, 3};
	
	printf("%d\n", v[2]);
	printf("%d\n", *(v+2));

	int *ptr;
	ptr = v;
	
	printf("%d\n", ptr[0]);
	printf("%d\n", *(ptr));
}
