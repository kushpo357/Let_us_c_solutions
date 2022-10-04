#include <stdio.h>
int fibo(int );
int main()
{
    int a;
    for ( a = 1; a < 26; a++)
        printf("%d ",fibo(a));
    printf("\n");
    return 0;
}
int fibo(int num)
{
    int f;
    if (num == 1 || num == 2)
            return 1;
    else
        f = fibo(num -1) + fibo(num - 2);
    return f;
}
//wrong interpretation hence wrong program
