#include <stdio.h>
#include <math.h>
int bin (int , int );
int main()
{
    int num, c = -1;
    printf("enter number : ");
    scanf("%d", &num);
    printf("equialent binary = %d \n", bin(num, c));
    return 0;
}
int bin (int num, int c)
{
    int a, sum;
    if (!(num))
        return 0;
    else
        {   
            a = num % 2;
            num = num / 2;
            c++;
            sum = a * pow(10,c) + bin (num, c);
        }
    return sum;
    
}
