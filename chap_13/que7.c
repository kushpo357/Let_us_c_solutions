#include <stdio.h>
#include <math.h>
int main()
{
	int j = 0;
	float a[] = {137.4, 155.2, 149.3, 160.0, 155.6, 149.7}, temp ,larg = 0;
	float b[] = {80.9, 92.6, 97.63, 100.25, 68.95, 120.0};
	float angle[] = {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};
	for (int i = 0; i < 6; i++){
		temp = a[i] * b[i] * angle[i] / 2;
		printf("Area of plot %d is %f\n", i + 1, temp);
		if (larg < temp){
			larg = temp;
			j++;
		}
	}
	printf("Largest piece of land is land %d which is %f in area\n", j, larg);
	//printf("%f %f %f %f\n", a[5], b[5], angle[5], a[5]*b[5]*angle[5]); 
	return 0;
}
