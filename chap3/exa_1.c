#include <stdio.h>
int main()
{
	float cp, sp, pr, loss;
	printf("Enter cost price in Rs.: ");
	scanf("%f", &cp);
	printf("Enter selling price in Rs: ");
	scanf("%f", &sp);
	if (cp > sp){
		loss = (cp - sp);
		printf("The seller has incurred a loss of %f Rs.\n", loss);
	}
	if (sp > cp){
		pr = (sp - cp);
		printf("The seller has gained a profit of %f Rs.\n", pr);
	}
	if (sp == cp)
		printf("The seller has neither gained a profit nor incurred a loss\n");
	return 0;
}
