#include <stdio.h>
#include <math.h>
int main()
{
	float x[] = {34.22, 39.87, 41.85, 43.23,  40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15},
	      y[] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};

	float sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0, sumY2 = 0 , r;
	
	for (int i = 0; i < 11; i++){
		sumX = sumX + x[i];
		sumY = sumY + y[i];
		sumXY = sumXY + x[i]*y[i];
		sumX2 = sumX2 + x[i]*x[i];
		sumY2 = sumY2 + y[i]*y[i];
	}
	
	r = (sumXY - sumX*sumY) / sqrt((11*sumX2 - sumX*sumX)*(11*sumY2 - sumY*sumY));
	printf("r = %f\n", r);
	return 0;
}
