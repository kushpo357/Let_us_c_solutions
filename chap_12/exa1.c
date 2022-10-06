#include <stdio.h>
#define LOW(c) ((c<123 && c>96)?1:0)
#define UP(c) ((c<91 && c>64)?1:0)
#define CHAR(c) ((LOW(c) && UP(c))?1:0)
#define BIG(a,b) (a>b?a:b)
int main()
{
    int a,b;
    char c;
    a = 23; b = 55; c = 'c';
    if (LOW(c))
        printf("lower case");
    else if (UP(c))
        printf("upper case");
    if (LOW(c) || UP(c))
        printf(" character");
    printf("\nbigger number among a and b = %d",BIG(a,b));
return 0;
}