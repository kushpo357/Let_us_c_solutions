#include <stdio.h>
int main()
{
	int num,t;
	printf("Enter a 5 digit number: ");
	scanf("%d", &num);
	printf("Reversed number: ");
	t = num % 10;
	num = num / 10;
	printf("%d",t);
	t = num % 10;
	num = num / 10;
	printf("%d",t);
	t = num % 10;
	num = num / 10;
	printf("%d",t);
	t = num % 10;
	num = num / 10;
	printf("%d",t);
	printf("%d\n",num);
	return 0;

}
