#include <stdio.h>
int sum(int);
int main()
{
    int num;
    printf("enter num : ");
    scanf("%d", &num);
    num = sum(num);
    printf("%d\n",num);
    return 0;
}
int sum(int num)
{
    int nsum ;
    if (num == 0)
        return 0;
    else
        nsum = (num % 10) + sum(num / 10);
    return nsum;
}
