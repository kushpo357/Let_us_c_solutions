#include <stdio.h>
int main()
{
	float far, cent;
	printf("Enter temprature of city in Farhenheit degrees: ");
	scanf("%f",&far);
	cent=(far-32)*5/9;
	printf("Tmprature of city in centigrade degrees: %f\n",cent);
	return 0;
}
