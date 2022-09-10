#include <stdio.h>
#include <math.h>
int main()
{
	float angle;
	printf("Enter angle in radian: ");
	scanf("%f", &angle);
	printf("sin(angle) = %f , cos(angle) = %f , tan(angle) = %f \n", sin(angle), cos(angle), tan(angle));
	printf("cosec(angle) = %f , sec(angle) = %f , cot(angle) = %f \n", 1/sin(angle), 1/cos(angle), 1/tan(angle));
	return 0;
}
