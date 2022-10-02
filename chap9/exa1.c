#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void func(float *, float *, float *, float *, float *, float *, float *); // for five integers, sum, average and standard deviation
int main()
{
    float a, b, c, d, e, sum;
    float mean;
    printf("enter five integers : ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    func(&a, &b, &c, &d, &e, &sum, &mean);
    printf("sum = %f\naverage = %f\n", sum, mean);
    printf("standard deviation is given as :\n");
    printf("a = %f, b = %f, c = %f, d = %f, e = %f\n", a, b, c, d, e);
    return 0;
}
void func(float *a, float *b, float *c, float *d, float *e, float *sum, float *mean)
{
    // printf("%f", *a);
    *sum = *a + *b + *c + *d + *e;
    // printf("%f", *sum);
    *mean = *sum / 5;
    *a = abs(*mean - *a);
    *b = abs(*mean - *b);
    *c = abs(*mean - *c);
    *d = abs(*mean - *d);
    *e = abs(*mean - *e);
}