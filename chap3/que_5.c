#include <stdio.h>
int main()
{
    float le, br, per, area;
    printf("enter length : ");
    scanf("%f", &le);
    printf("enter bradth : ");
    scanf("%f", &br);

    per = 2 * (le + br);
    area = le * br;

    printf("perimeter of rectangle = %f", per);
    printf("\narea of rectangle = %f", area);

    if (area > per)
        printf("\narea > per");
    if (area == per)
        printf("\narea = per");
    if (area < per)
        printf("\narea < per");
    printf("\n");
    return 0;
}
