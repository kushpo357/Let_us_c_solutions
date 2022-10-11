#include<stdio.h>
int main()
{
	float n = 10, a, b, x, y;
	float arx[] = {3.0, 4.5, 5.5, 6.5, 7.5, 8.5, 8.0, 9.0, 9.5, 10.0};
	float ary[] = {1.5, 2.0, 3.5, 5.0, 6.0, 7.5, 9.0, 10.5, 12.0, 14.0};
	float sxy = 0, sx = 0, sy = 0, sx2 = 0;
	for(int i = 0; i < 10; i++)
	{
		sxy = sxy + arx[0]*ary[0];
		sx = arx[0] + sx;
		sy = ary[0] + sy;
		sx2 = arx[0]*arx[0] + sx2;
	}
	b = (n*sxy - sx*sy)/(n*sx2 - sx*sx);
	a = sy/n - b*sx/n;
	printf("Enter points x and y : ");
	scanf("%f %f", &x, &y);
	if(y == (a + b*x))
		printf("it satisfies y = a + bx\n");
	else
		printf("it doesn't satisfy y = a + bx\n");
	return 0;
}
