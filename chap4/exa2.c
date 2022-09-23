#include <stdio.h>
int main()
{
	char ascii;
	printf("Enter a character from keyboard: ");
	scanf("%c", &ascii);
	if ((ascii >= 48) && (ascii <= 57))
	       printf("This character is a number\n");	
	if ((ascii >= 65) && (ascii <= 90))
	       printf("This character is a Upppercase letter\n");	
	if ((ascii >= 97) && (ascii <= 122))
	       printf("This character is a Lowercase letter\n");	
	if ((ascii >= 0 && ascii < 48) || (ascii > 57 && ascii < 65) || (ascii > 90 && ascii < 97) || ascii > 122)
		printf("This character is a special symbol\n");
	return 0;
}
