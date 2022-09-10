#include <stdio.h>
#include <math.h>
int main()
{
	float t, v, wcf;
	printf("Enter temprature and wind velocity in order : ");
	scanf("%f %f", &t, &v);
	wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75)*pow(v,0.16);
	printf("wind chill factor according to the data is %f\n", wcf);
	return 0;
}
