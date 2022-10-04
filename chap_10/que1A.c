#include <stdio.h>
int main()
{
    int num, t, bin = 0, s = 1;
    printf("enter number : ");
    scanf("%d", &num);
    while (num > 0)
    {
        t = num % 2;
        num = num / 2;
        bin = bin + t * s;
        s *= 10;
    }
    printf("equivalent binary = %d\n", bin);
    return 0;
}
