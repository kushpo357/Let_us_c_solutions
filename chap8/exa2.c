#include <stdio.h>
int power(int, int);
int main()
{
    int a, b, result;
    printf("enter base (a in a^b): ");
    scanf(" %d", &a);
    printf("enter exponent (b in a^b): ");
    scanf(" %d", &b);
    result = power(a, b);
    printf("result = %d\n", result);

    return 0;
}
int power(int a, int b)
{
    int result, i;
    result = a;
    for (i = 1; i < b; ++i)
        result = result * a;
    return (result);
}
