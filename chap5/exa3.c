#include <stdio.h>
int main()
{
    int num, exp, re;
    printf("enter number : ");
    scanf("%d", &num);
    printf("enter power : ");
    scanf("%d", &exp);
    re = 1;
    while (exp-->=1)
    re = re*num;
    
    printf("result : %d\n", re);
    
    return 0;
}
