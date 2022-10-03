#include <stdio.h>
#include <math.h>
void area(float *, float *, float *, float *);
int main()
{ //to find the area of a triangle with given sides
    float a, b, c, are;
    char check = 'f';
    while(check != 't')
    {   printf("enter sides (a b c) : ");
        scanf(" %f %f %f", &a, &b, &c);
        if(a >= (b + c) || b >= (a + c) || c >= (b + a))
            {
                printf("invalid triangle\n");
                check = 'f';
            }
        else
            check = 't';    
    }
    area(&a, &b, &c, &are);
    printf("area = %f\n", are);
    return 0;
}
void area(float *a, float *b, float *c, float *are)
{
    float s;
    s = (*a + *b + *c) / 2.00;
    *are = sqrt(s * (s - *a) * (s - *b) * (s - *c));
}
