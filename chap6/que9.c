#include <stdio.h>
int main()
{
int i,j,k,l,t=8,fac,n,o,p;
int q,r;
for(i=1; i<6 ; i++){
    for(j = 0; j< t; j++)
        printf(" ");
    
    for(l = 0; l<i; l++){
        int m = 1;
        fac = i - 1;
        for ( p = i - 2; p >= 1; p--)
        {
            fac = fac * p;
        }
        n = l;
        for ( p = l - 1; p >= 1; p--)
        {
            n = n * p;
        }
        o = i - l -1;
        for ( p = i - n - 2; p >= 1; p--)
        {
            o = o * p;
        }
        if (n == 0 || o == 0 || fac == 0)
            m = 1;
        else
            m = fac / (n * o);
        printf("%d",m);
        // printf("%d",fac);
        // printf("%d",n);
        // printf("%d",o);
        printf("   ");
        n++;
        o--;
    }
    printf("\n\n");
    t-=2;
}
return 0;
}