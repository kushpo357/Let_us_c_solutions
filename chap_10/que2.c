#include <stdio.h>
void num(int *);
int main()
{
    int a = 1;
    num (&a);
    return 0;
}
void num(int *a)
{
    if(*a == 26)
        return;
    else
        printf("%d ", *a);
        *a += 1;
        num(a);
}