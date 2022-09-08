#include <stdio.h>
int main()
{	float le, br, r, rarea, peri, circ, carea;
	printf("Enter length and breadth of the rectangle in order: ");
	scanf("%f %f", &le, &br);
	printf("Enter radiuse of cirlcle: ");
	scanf("%f", &r);
	rarea = le * br ;
	peri = 2 * ( le + br );
	circ = 44 * r / 7;
	carea = 22 * r * r / 7;
	printf("Area of rectangle = %f , Perimeter of rectangle = %f\n", rarea, peri);
	printf("Area of circle = %f , circumference of circle = %f\n", carea, circ);
	return 0;
}
