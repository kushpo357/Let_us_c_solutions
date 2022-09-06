#include <stdio.h>
int main()
{
	float km, m, cm, fe, in;
	printf("Enter the distance in kilometers (km): ");
	scanf("%f",&km);
	m=1000*km;
	cm=100000*km;
	fe=3280*km;
	in=39370*km;
	printf("Distance in km: %f\n",km);
	printf("Distance in m: %f\n",m);
	printf("Distance in cm: %f\n",cm);
	printf("Distance in feet: %f\n",fe);
	printf("Distance in inch: %f\n",in);
	return 0;

}
