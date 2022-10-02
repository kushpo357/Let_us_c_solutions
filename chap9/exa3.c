#include <stdio.h> 
#include <math.h>
float sine(float);
int facto(int);
int main()
{
    float x,sinx;
    printf("enter value of x : ");
    scanf("%f", &x);

    printf("sin(x) = %f\n", sine(x));
    return 0;
}
float sine(float x)
{
    int i;
    float sinx = 0, a, b;
    for ( i = 1; i <= 5 ; i++)
    {
        b = pow(x,(2 * i - 1)) * (pow(-1,i+1));
        a = facto(i);
        
        sinx = sinx + (b)/ a;
    }
    return(sinx);    
}
int facto(int i)
{
    int j, fac = 1;

    for(j = 1; j <= ((2 * i) - 1 ); j++ )
        {
            fac = fac * j;
        }

    return (fac);
}