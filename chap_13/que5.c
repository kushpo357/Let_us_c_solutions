#include <stdio.h>
void modify(int *, int );
int main()
{
	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	printf("Initially elements of the array are like: ");
	for (int i = 0; i < 10; i++)
		printf("%d ",arr[i]);
	printf("\n");
	modify(arr,10);
	printf("Afterwards elements of the array are like: ");
	for (int j = 0; j < 10; j++)
		printf("%d ",arr[j]);
	printf("\n");
	return 0;
}
void modify(int *arr , int n)
{
	for (int i = 0; i < n; i++)
		*(arr + i) = (*(arr + i))*(*(arr + i));
}
