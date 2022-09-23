#include <stdio.h>
int main()
{
	int s1, s2, s3;
	printf("Enter sides s1, s2, s3 in order (s1 s2 s3):\n");
	scanf("%d %d %d", &s1, &s2, &s3);
	if ((s1 >= s2 + s3) || (s2 >= s1 + s3) || (s3 >= s2 + s1))
				printf("Invalid triangle\n");
	else
		printf("The triangle is valid\n");
			
	return 0;
}
