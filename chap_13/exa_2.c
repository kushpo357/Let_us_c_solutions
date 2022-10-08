#include <stdio.h>
int main()
{
	int arr[] = {0,1,2,3,4}, rarr[5];
	printf("Original array:\n");
	for (int i = 0 ; i < 5 ; i++)
		printf("%d ", arr[i]);
	printf("\n");
	for (int j = 0 ; j < 5 ; j++)
		rarr[4 - j] = arr[j];
	printf("Reversed array:\n");
	for (int k = 0 ; k < 5 ; k++)
		printf("%d ", rarr[k]);
	printf("\n");
	return 0;
}
