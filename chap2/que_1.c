#include <stdio.h>
int main()
{
	int num,t;
	printf("Enter a 5 digit number: ");
	scanf("%d", &num);
	t = num % 10;
	num = num / 10;
	t = t + (num % 10);
	num = num / 10;
	t = t + (num % 10);
	num = num / 10;
	t = t + (num % 10);
	num = num / 10;
	t = t + num;
	printf("Sum of digits: %d\n", t);
	return 0;
}
