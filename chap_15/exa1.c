#include <stdio.h>
#include <string.h>
int main()
{
	char len1, str1[20], str2[20];

	len1 = strlen(str1);

	printf("Enter a string : ");
	scanf("%[^\n]", str1);

	printf("Enter the position to start extracting characters from : ");
	int p;
	scanf("%d", &p);
	//p = p - 1;
	while (p >= len1){
		printf("incorrect value");
		scanf("%d", &p);
		//p = p - 1;
	}
		

	printf("Enter number of characters to be extracted : ");
	int len2;
	scanf("%d", &len2);
	
	int i = p, j = 0;
	while((i < p + len2 || str1[i] == '\0') && p < len1){
		str2[j] = str1[i];
		i++;
		j++;
	}
	if (strlen(str2)<len2)
		printf("number of extracted characters adjusted according to lenght of given string");
	str2[j] = '\0';
	printf("%s\n", str2);
	return 0;
}
