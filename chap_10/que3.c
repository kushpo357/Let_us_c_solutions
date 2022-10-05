#include <stdio.h>
void tower(int *, int *, int *, int, int *, int *, int*);
int main(){
	int n, a, b = 0, c = 0;
	printf("Enter the number of Rings in A: ");
	int *A, *B, *C;
	A = &a, B = &b, C = &c;
	scanf("%d", &n);
	while(n < 1){
		printf("No. of rings is invalid"); 
		scanf("%d", &n);
	}
	a = n;	
	printf("A = %d, B = %d, C = %d \n", *A, *B, *C);
	tower(&a, &b, &c, n, A, B, C );
	//printf("%d %d %d m e\n", a, b, c);
	return 0;
	
}
void tower(int *a, int *b, int *c, int n, int * A, int * B, int * C){
	if (n == 1){
		*a = *a - 1;
		*c = *c + 1;
		printf("A = %d, B = %d, C = %d \n", *A, *B, *C);
		return;
	}
	tower(a, c, b, (n - 1), A, B, C);
	*a = *a - 1;
	*c = *c + 1;
	printf("A = %d, B = %d, C = %d \n", *A, *B, *C);
	tower(b, a, c, (n - 1), A, B, C);
	return;
}

