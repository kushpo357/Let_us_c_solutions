#include <stdio.h>
#include <stdlib.h>
int main()
{
	int max, *p, check = 0;
	printf("Enter size of array: ");
	scanf("%d", &max);
	p = (int*)malloc(max*sizeof(int));
	printf("Enter elements in array\n");
	for (int i = 0; i < max; i++)
		scanf("%d", &p[i]);
	for (int j = 0, k = (max - 1); k > j; j++, k--)
	{
		if (p[j] == p[k])
		{
			printf("element at position %d is equal to element at position %d\n", j, k);
			check++;
		}
	}
	if(!check)
		printf("No mirror place elements are equal\n");
	return 0;
}
