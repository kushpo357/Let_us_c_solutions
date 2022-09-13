#include <stdio.h>
int main()
{
    float x1, y1, r, x2, y2, ch;

    printf("enter the coordinates of the center circle (x1,y1) : ");
    scanf("%f %f", &x1, &y1);
    printf("enter radius of circle : ");
    scanf("%f", &r);
    printf("enter point to checked (x2,y2) : ");
    scanf("%f %f", &x2, &y2);

    ch = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) - r * r;

    if (ch < 0)
        printf("\npoint is inside the circle");
    if (!ch)
        printf("\npoint is on the circle");
    if (ch > 0)
        printf("\npoint is outside the circle");
    printf("\n");
    return 0;
}