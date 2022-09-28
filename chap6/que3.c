#include <stdio.h>
#include <math.h>
int main()
{ //calculating compound intrerst upto 10 input
    int n, r, p, q, c = 1;
    float a;

    do
    {
        printf("enter values of n, p, r and q :");
        fflush(stdin);
        scanf("%d %d %d %d", &n, &p, &r, &q);
        a = p * pow((1 + r / q), n * q);
        printf("amount = %f\n\n", a);
        c++;
    } while (c <= 10);

    return 0;
}
