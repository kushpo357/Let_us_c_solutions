#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x1, x2, y1, y2, x3, y3, sl3, sl2, sl1;

    printf("enter coordinates of point 1 : ");
    scanf("%f %f", &x1, &y1);
    printf("enter coordinates of point 2 : ");
    scanf("%f %f", &x2, &y2);
    printf("enter coordinates of point 3 : ");
    scanf("%f %f", &x3, &y3);

    sl1 = abs(y2 - y1) / abs(x2 - x1);
    sl2 = abs(y3 - y2) / abs(x3 - x2);
    sl3 = abs(y1 - y3) / abs(x1 - x3);
    if ((sl1 == sl2) && (sl1 == sl3))
        printf("they are in line\n");
    else
        printf("they are not in line\n");
    return 0;
}
