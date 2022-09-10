#include <stdio.h>
#include <math.h>
int main()
{
	float x, y, r, angle;
	printf("Enter x and y co-ordinates (x y) : ");
	scanf("%f %f", &x, &y);
	r = sqrt((x*x) + (y*y));
	angle = atan(y/x)*180*7/22;
	printf("Polar co-ordinates (r , angle) : ( %f , %f)\n", r, angle);
	return 0;
}
