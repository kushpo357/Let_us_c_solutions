#include <stdio.h>
int main()
{
    int ye, ya, a, b;

    printf("enter year : ");
    scanf("%d", &ye);

    ya = ye - 1;
    a = ya / 4 - ya / 100 + ya / 400;
    b = ((a * 366) + ((ya - a) * 365)) % 7;

    if (!b)
        printf("1st day of this year is Monday");
    if (b == 1)
        printf("1st day of this year is Tuesday");
    if (b == 2)
        printf("1st day of this year is Wednesday");
    if (b == 3)
        printf("1st day of this year is Thursday");
    if (b == 4)
        printf("1st day of this year is Friday");
    if (b == 5)
        printf("1st day of this year is Saturday");
    if (b == 6)
        printf("1st day of this year is Sunday");

    return 0;
}