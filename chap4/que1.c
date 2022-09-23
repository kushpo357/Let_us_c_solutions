#include <stdio.h>
int main()
{
    int a, b, c, G;
    printf("enter the three sides of triangle (a,b,c) : ");
    scanf("%d %d %d", &a, &b, &c);

    if (!(a + b >= c && a + c >= b && b + c >= a))
        printf("triangle is not valid\n");
    else{
    	if (a == b && b == c)
        	printf("triangle is equilateral\n");
    	else if (a == b || b == c || c == a)
        	printf("triangle is isoceles\n");
    	else
        	printf("triangle is scalene\n");
    	if ((a*a + b*b) == c*c || (a*a + c*c) == b*b || (c*c + b*b) == a*a)
		 printf("triangle is right angled\n");   

    }

    return 0;
}
