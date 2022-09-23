#include <stdio.h>
int main()
{
    float h, c, t;
    printf("enter hardness grade :");
    scanf("%f", &h);
    printf("enter carbon content :");
    scanf("%f", &c);
    printf("enter tensile strength :");
    scanf("%f", &t);

    if (h > 50)
        h = 1;
    else
        h = 0;

    if (!(c >= 0.7))
        c = 1;
    else
        c = 0;

    if (t > 5600)
        t = 1;
    else
        t = 0;
    
    if (h && c && t)
        printf("grade = 10");
    else if (h && c && !t)
        printf("grade = 9");
    else if (!h && c && t)
        printf("grade = 8");
    else if (h && !c && t)
        printf("grade = 7");
    else if ((h && !c && !t) || (!h && !c && t) || (!h && c && !t))
        printf("grade = 6");
    else
        printf("grade =5");

    printf("\n");

    return 0;
}
