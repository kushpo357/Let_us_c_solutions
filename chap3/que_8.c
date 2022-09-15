#include <stdio.h>
int main()
{
    int x, y;
    printf("enter coordinates of the point to be checked  (x,y) : ");
    scanf("%d %d", &x, &y);

    if (!x)
    {
        if (!y)
            printf("poiint is on the origin");
        else
            printf("point is on the Y - axis");
    }
    if (!y)
    {
        if (x)
            printf("point is on the X - axis");
    }
    if (y)
    {
        if (x)
            printf("point is somewhere inside any of the quadrants");
    }
    return 0;
}