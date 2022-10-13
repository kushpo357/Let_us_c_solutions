#include <stdio.h>
int main()
{
	int arr[3][2][3] = { { {1, 2, 3}, {4, 5, 6} }, { {7, 8, 9}, {10, 11, 12} }, { {13, 14, 15}, {16, 17, 18} } };
	for (int i = 0; i < 3; i++){
		for (int j = 0 ;j < 2 ; j++)
			printf("%d %d %d\n", arr[i][j][0], arr[i][j][1], arr[i][j][2]);
		printf("\n");
	}
	printf("first element = %d , last element = %d\n", arr[0][0][0], arr[2][1][2]);
	return 0;
}
