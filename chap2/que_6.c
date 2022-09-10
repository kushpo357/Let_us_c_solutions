#include <stdio.h>
int main()
{
	int C, D, t;
	printf("Enter number 1 (C): ");
	scanf("%d", &C);
	printf("Enter number 2 (D): ");
	scanf("%d", &D);
	t = C;
	C = D;
	D = t;
	printf("Number 1 (C) = %d\n", C);
	printf("Number 2 (D) = %d\n", D);
	return 0;
}
