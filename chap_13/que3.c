#include <stdio.h>
int main()
{
	int arr[] = {2,5,63,7,346,3,5,312,69}, t;
	for (int i = 0; i < 9; i++)
	{
		if (!i)
			t = arr[i];
		else if (t > arr[i])
			t = arr[i];
	}
	printf("In this array the smallest element is %d\n", t);
	return 0;
}
