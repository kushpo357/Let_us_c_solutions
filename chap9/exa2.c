#include <stdio.h>
void stu(int, int, int, float *, float *);
int main()
{
    int ma, eng, sci;
    float mean, per;
    printf("enter marks in maths (out of 100) : ");
    scanf(" %d", &ma);
    printf("enter marks for english (out of 100) : ");
    scanf(" %d", &eng);
    printf("enter marks for science (out of 100) : ");
    scanf(" %d", &sci);
    stu(ma, eng, sci, &mean, &per);
    printf("average marks = %f\npercentage = %f\n", mean, per);
    return 0;
}
void stu(int ma, int eng, int sci, float *mean, float *per)
{
    *mean = (ma + eng + sci) / 3;
    *per = *mean;
}
