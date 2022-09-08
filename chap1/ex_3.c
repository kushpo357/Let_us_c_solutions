#include <stdio.h>
int main()
{
	int hi,eng,ma,ch,ph,ag;
	float per;
	printf("Enter marks obtained in hindi, english, maths, chemistry, physics in order\n");
	scanf("%d %d %d %d %d", &hi, &eng, &ma, &ch, &ph);
	ag=hi+eng+ma+ch+ph;
	per=ag/5;
	printf("Aggregate marks: %d , percentage: %f\n",ag,per);
	return 0;
}

