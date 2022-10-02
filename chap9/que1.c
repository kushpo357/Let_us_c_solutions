#include <stdio.h>
void shift (int *, int *, int *);
int main()
{
    int x, y, z;
    printf("enter values :");
    scanf(" %d %d %d", &x, &y, &z);
    shift(&x, &y, &z);
    printf("after shift :\nx = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}
void shift (int *a,int *b, int *c)
{
    int t;
    t = *a;
    *a = *c;
    *c = *b;
    *b = t;
}
