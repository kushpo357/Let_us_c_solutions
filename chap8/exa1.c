#include <stdio.h>
int facto(int);
int main()
{
    int num, fac;
    printf("enter number :");
    scanf("%d", &num);
    fac = facto(num);
    printf("factorial = %d\n", fac);
    return 0;
}
int facto(int num)
{
    int fac;
    fac = num;
    while (--num >= 1)
        fac = fac * num;
    return (fac);
}
