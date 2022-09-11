#include <stdio.h>
int main()
{
	int year, l = 0;
	printf("Enter year: ");
	scanf("%d", &year);
	if (!(year % 4))
		l = 1;
	if (!(year % 100))
		l = 0;
	if (!(year % 400))
		l = 1;
	if (l)
		printf("It is a leap year\n");
	else
		printf("It is not a leap year\n");
	return 0;
}
