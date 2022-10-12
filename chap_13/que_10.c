#include<stdio.h>
#include<math.h>
int main()
{
	float arrx[4], arry[4];
	float arrd[3], d = 0;

	for(int i = 0; i < 4; i++)
	{
		printf("input point no. %d (x y): " , i + 1);
		scanf("%f %f", (arrx + i), (arry + i));
	}

	for(int i = 0; i < 3; i++)
	{
		arrd[i] = (arrx[i] - arrx[i+1])*(arrx[i] - arrx[i+1]) + (arry[i] - arry[i+1])*(arry[i] - arrx[i+1]);
		arrd[i] = sqrt(arrd[i]);
	}

	for(int i = 0; i < 3; i++)
		d = d + arrd[i];

	printf("distance between first and last point = %f\n", d);
	return 0;
}
