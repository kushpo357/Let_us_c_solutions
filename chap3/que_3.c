#include <stdio.h>
int main()
{
    float to, a, b, c;
    printf("input angle a in degrees: ");
    scanf("%f", &a);
    printf("\ninput angle b in degrees : ");
    scanf("%f", &b);
    printf("\ninput angle c in degrees : ");
    scanf("%f", &c);
    to = a + b + c;
    if (a >= 0)
    {
        if (b >= 0)
        {
            if (c >= 0)
            {
                if (to == 180)
                    printf("\n\nthe triangle is valid\n");
                else
                    printf("\n\nthe triangle is invalid\n");
            }
            else
                printf("invalid\n");
        }
        else
            printf("invalid\n");
    }
    else
        printf("invalid\n");
    return 0;
}
