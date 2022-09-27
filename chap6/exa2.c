#include <stdio.h>
int main()
{
    float count, co;
    int fac;
    float su = 0;
    for ( co = 1; co <= 7; co++)
    {   
        fac = 1;
        for ( count = 1; count <= co; count++)
            fac = fac*count;
        su = su + co/fac;
    }
    
    printf("Sum of series = %f\n", su);
return 0;
}