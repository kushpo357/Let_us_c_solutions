#include <stdio.h>
int main()
{
	int arr[]={1,654,35,6,4564,23,3,786,65,54};
	printf("Initially array is like :\n");
	for (int i = 0; i < 10; i++)
		printf("%d ",arr[i]);
	printf("\n");
	printf("Applying insertion sort");
	printf("\n");
	int t;
	for (int j = 1; j < 10 ; j++){
		for (int k = j; k > 0; k--){
			if (arr[k] <= arr[k - 1])
			{	
				t = arr[k - 1];
				arr[k - 1] = arr[k];
				arr[k] = t;
			}
			else
				break;
		}

		//printf("%d",);
	}
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
