#include <stdio.h>
#include "areaperi.h"
int main()
{
    int t;
    float s;
    float a, b, c, h, B;
    float r;
    printf("enter to calculate area and perimeter of : ");
    printf("\n1.circle  2.square 3. triangle");
    // scanf("%d", &t);
    t = 3;
    switch (t)
    {
    case 1:
        printf("\nenter radius of circle : ");
        // scanf("%f", &r);
        r = 1;
        printf("\nperimetre = %f area = %f ", CPERI(r) ,CAREA(r));
        break;
    case 2:
        printf("\nenter side of square : ");
        // scanf("%f", &a);
        s = 1;
        printf("\nperimetre = %f area = %f ", SPERI(s) ,SAREA(s));
        break;
    case 3:   
        printf("\nenter sides of triangle (a b c): ");
        // scanf("%f %f %f", &a, &b, &c);
        a = 1, b = 1, c = 1;
        printf("\nenter height and base of triangle : ");
        // scanf("%f %f", &h ,&B);
        B = 1; h = 0.433;
        printf("\nperimetre = %f area = %f ", TPERI(a,b,c) ,TAREA(B, h));
        break;
    }

return 0;
}