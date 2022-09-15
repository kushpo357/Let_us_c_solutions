#include <stdio.h>
int main()
{
    int yr, a, b, c;
    printf("Enter the year :");
    scanf("%d", &yr);
    a = yr % 100;
    b = yr % 4;
    c = yr % 400;
    if (!c || a && !b)
        printf("It is a leap year");
    else
        printf("It is not a leap year");

    return 0;
}