#include <stdio.h>
int main()
{
	float h, w, BMI;
	printf("Enter weight of the person (in kilograms): ");
	scanf("%f", &w);
	printf("Enter height of the person (in meters): ");
	scanf("%f", &h);
	BMI = w/(h*h);
	printf("Your BMI category is ");
	if (BMI < 15)
		printf("Starvation\n");
	else if ((BMI >= 15) && (BMI < 17.5) )
		printf("Anorexic\n");
	else if ((BMI >= 17.5) && (BMI < 18.5))
		printf("Underweight\n");
	else if ((BMI >= 18.5) && (BMI < 25))
		printf("Ideal\n");
	else if ((BMI >= 25)  && (BMI <= 25.9))
		printf("Overwieght\n");
	else if ((BMI >=30) && BMI <= 30.9)
		printf("Obese\n");
	else if (BMI >= 40)
		printf("Morbidly Obese\n");
	return 0;
}
