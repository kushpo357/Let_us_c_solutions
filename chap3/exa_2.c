#include <stdio.h>
int main()
{
	int num;
	printf("Enter an even integer: ");
	scanf("%d", &num);
	if (num % 2)
		printf("it is odd\n");
	else
		printf("it is even\n");
	return 0;
}
