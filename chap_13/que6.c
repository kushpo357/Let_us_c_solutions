#include <stdio.h>
#include <math.h>
int main()
{
	int standev[] = {-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
	int mean = 0;
	for (int i = 0; i < 15 ; i++)
		mean = mean + standev[i];
	mean = mean / 15;
	int temp;
	for (int j = 0; j < 15 ; j++)
		temp = temp + (standev[j] - mean)*(standev[j] - mean);
	temp = sqrt(temp) / 15;
	printf("mean of the array elements %d\n", mean);
	printf("standard deviation of the array elements %d\n", mean);
	return 0;
}
