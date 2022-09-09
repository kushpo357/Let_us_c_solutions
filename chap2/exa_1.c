#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, semiperi, area;
	printf("Enter lengths of the sides of triangle\n");
	scanf("%f %f %f", &a, &b, &c);
	semiperi = (a + b + c) / 2;
	area = sqrt( semiperi * (semiperi - a) * (semiperi - b) * (semiperi - c) );
        printf("Area of triangle = %f\n", area);
	return 0;
}
