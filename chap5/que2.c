#include <stdio.h>
int main()
{ 
    // to calculate armstrong numbers upto 500
    int num = 1, a, b, c;
    printf("armstrong numbers are : ");
    while (num <= 500)
    {
        a = num % 10;
        b = ((num - a) / 10) % 10;
        c = (num - a - 10 * b) / 100;
        if (num == a*a*a +b*b*b +c*c*c)
            printf("%d ",num);
        num++;
    }
    printf("\n");
    return 0;
}
