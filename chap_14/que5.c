#include <stdio.h>
int main()
{
	int arr[4][4];
	for(int i = 0; i < 4 ; i++){
		printf("Enter row %d elements (like 1 2 3 4) :\n", i + 1);
		scanf("%d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3]);
	}
	int check = 1;
	for(int i = 0; i < 4 ; i++){
		for(int j = i; j < 4; j++){
			if (arr[i][j] != arr[j][i]){
				check = 0;
				break;
			}
		}
	}
	if(!check)
		printf("The array is not symmetrical\n");
	else
		printf("The array is symmetrical\n");
	return 0;
}
