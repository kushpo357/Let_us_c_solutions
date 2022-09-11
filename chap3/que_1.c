#include <stdio.h>
int main()
{
    int a, b, c, d, e, num, mun;
    printf("input 5 - digit number :");
    scanf("%d", &num);
    a = num % 10;
    b = ((num - a) / 10) % 10;
    c = ((num - (10 * b) - a) / 100) % 10;
    d = ((num - a - 10 * b - 100 * c) / 1000) % 10;
    e = (num - (a + 10 * b + 100 * c + 1000 * d)) / 10000;
    mun = a * 10000 + b * 1000 + c * 100 + d * 10 + e;
    printf("its reverse is = %d\n", mun);

    if (num == mun)
        printf("it does not change when reversed\n");
    return 0;
}
