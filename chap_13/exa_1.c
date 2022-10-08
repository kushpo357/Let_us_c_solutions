
#include <stdio.h>
int main()
{
	int arr[]={0,1,2,3,4,5,6,7,8,9};
	printf("Initially array elements are like: \n");
	for (int i=0;i<10;i++)
		printf("%d ",arr[i]);
	for (int j=0;j<10;)
	{
		int t;
		t = arr[j];
		arr[j] = arr[j+1];
		arr[j+1]=t;
		j += 2;
	}
	printf("\nAfter interchanging odd and even position elements array elements are like: \n");
	for (int i=0;i<10;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
