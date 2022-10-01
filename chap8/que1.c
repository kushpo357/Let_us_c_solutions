#include <stdio.h>
void saal(int);
int main()
{
    int yr;
    printf("Enter the year :");
    scanf("%d", &yr);
    saal(yr);
    return 0;
}
void saal(int yr)
{
    int a, b, c;
    a = yr % 100;
    b = yr % 4;
    c = yr % 400;
    if (!c || a && !b)
        printf("It is a leap year\n");
    else
        printf("It is not a leap year\n");
}
