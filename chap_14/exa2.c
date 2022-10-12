#include <stdio.h>
int main()
{
	int a[4][4], temp;
	for (int i = 0; i < 4 ; i++)
	{
		printf("Enter elements of row %d (like 1 2 3 4)\n", i + 1);
		scanf("%d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = i ;j < 4; j++){
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}
	printf("The transposed matrix is like\n");
	for (int i = 0; i < 4 ; i++)
		printf("%d %d %d %d\n", a[i][0], a[i][1], a[i][2], a[i][3]);

	return 0;
}
