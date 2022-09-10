#include <stdio.h>
#include <math.h>
int main()
{
	float L1, L2, G1, G2, D;
	printf("Input Latitude(L1 L2) and longitude(G1 G3) in degrees in order: ");
	scanf("%f %f %f %f ", &L1, &L2, &G1, &G2);
	L1 = L1 * 3.14 / 180;
	L2 = L2 * 3.14 / 180;
	G1 = G1 * 3.14 / 180;
	G2 = G2 * 3.14 / 180;
	D = 3963*(acos(sin(L1)*sin(L2) + cos(L1)*cos(L2)*cos(G2 - G1)));
	printf("Distance in nautical miles is %f\n", D);
	return 0;
}
