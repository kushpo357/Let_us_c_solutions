#include <stdio.h>
int main()
{
	int a[5][5] = {
			{11, 1, 7, 9, 7},
			{13, 54, 56, 2, 5},
			{23, 43, 89, 22, 13},
			{14, 15, 17, 16, 19},
			{45, 3, 6, 8, 10}
		};
	int max;
	for(int i = 0 ; i < 5 ; i++){
		for (int j = 0 ; j < 5 ; j++){
			if ((i==0 && j==0) || (max < a[i][j]))
				max = a[i][j];			
		}
	}	
	printf("Largest number in the matrix is %d\n", max);
	return 0;
}
