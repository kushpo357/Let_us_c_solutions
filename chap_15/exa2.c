#include <stdio.h>
#include <string.h>
#include <math.h>
//#include <stdlib.h>
int main()
{
	char str[25];
	int strI = 0, len, check = 0;

	printf("Enter number : ");
	scanf("%s", str);
	len = strlen(str);
	
	int i = 0;
	while (str[i] != '\0'){
		if(str[i] < 48 || str[i] > 57){
			check++;
			break;
		}
		strI = strI + (str[i] - 48) * pow(10 , len -i -1);
		//printf("%d\n", strI);
		i++;
	}
	if (check)
		printf("invalid number\n");
	else{
		printf("Your number is %d\n", strI);
	}
	return 0;
}
