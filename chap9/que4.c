#include <stdio.h>
void codi(int *, int*, int*);
int main()
{
    int a, b, common;
    printf("enter two numbers : ");
    scanf(" %d %d", &a, &b);
    codi(&a, &b, &common);
    printf("greatest common divisor = %d\n", common);
    return 0;
}
void codi(int *x, int *y, int *common)
{
    int t, a;
    if (*x < *y)
        {
            a = *x;
            *x = *y;
            *y = a;
        }
    while(t != 0)
    {
        t = *x % *y;
        if(!t)
            *common = *y;
        else
            {
                *x = *y;
                *y = t;
            }         
    }
}
