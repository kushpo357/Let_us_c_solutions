#include <stdio.h>
int main()
{
	float bs, da, hr, gs;
	printf("Input basic salary: ");
	scanf("%f",&bs);
	da=0.4*bs;
	hr=0.2*bs;
	gs=da+hr+bs;
	printf("Basic salary of Ramesh: %f\n",bs);
	printf("Dearness allowance of Ramesh: %f\n",da);
	printf("House rent of Ramesh: %f\n",hr);
	printf("Gross salary of Ramesh: %f\n",gs);
	return 0;
}
