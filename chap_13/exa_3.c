#include <stdio.h>
int main()
{
	int arr[]={7,3,5,4,6,7,2,4,6,7};
	int find;
	printf("enter element to search: ");
	scanf("%d", &find);
	int t = 0;
	for (int i = 0 ; i < 10 ; i++){
		if (arr[i] == find)
			t++;
	}
	printf("\nNumber %d is found %d time(s) in the array\n", find, t);
	return 0;
}
