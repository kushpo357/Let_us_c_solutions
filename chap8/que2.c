#include <stdio.h>
void factor(int);
int main()
{
    int num;
    printf("enter number : ");
    scanf(" %d", &num);
    printf("Prime factors of %d are: ", num);
    factor(num);
    printf("\n");
    return 0;
}
void factor( int num)
{
    int i;
    for ( i = 2; i <= num;)
    {
        if(!( num % i ))
            {
                num = num / i;
                printf("%d ", i);
                continue;
            }
        
        i++;
    }
    
}
