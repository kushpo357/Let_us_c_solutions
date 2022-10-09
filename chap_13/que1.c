#include <stdio.h>
int main()
{
	int arr[6], p = 0, n = 0, o = 0, e = 0;
	printf("Enter 6 numbers in the array :\n");
	for (int i = 0; i < 6 ; i++)
		scanf("%d", &arr[i]);
	for (int j = 0; j < 6 ; j++){
		if(arr[j] < 0 )
			n++;
		else if (arr[j] > 0 ){
			p++;
			if (arr[j] % 2 == 1)
				o++;
			else
				e++;
		}
	}
	printf("No. of negative elements = %d\n", n);
	printf("No. of positive elements = %d\n", p);
	printf("No. of odd elements = %d\n", o);
	printf("No. of even elements = %d\n", e);
	return 0;
}
