#include <stdio.h>
int main()
{
    //to find range (difference btw max and min number) for a set of numbers
    int a, b, num;
    int q ;
    printf("enter number of elements in the set : ");
    scanf("%d",&q);
    printf("enter num :");
    scanf(" %d", &num);
    a = b = num;
    while (q > 1)
    {
        printf("enter num :");
        scanf(" %d", &num);
        if (a < num)
            a = num;
        if (b > num)
            b = num;
        q--;
    }

    printf("range = %d\n", a - b);

    return 0;
}
