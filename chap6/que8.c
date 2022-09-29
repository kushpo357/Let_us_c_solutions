#include <stdio.h>
int main()
{
    int ho = 1, hour;
    char x;
    
    printf("All hours of a day are as follows :\n");
    while (ho <= 24)
    {
        if (ho < 12)
            {
                hour = ho;
                x = 'a';
                printf("%d %cm\n", hour, x);
            }

        else if (ho == 12)
            printf("12 noon\n");

        else if (ho > 12 && ho != 24)
            {
                hour = ho - 12;
                x = 'p';
                printf("%d %cm\n", hour, x);
            }
            
        else
            printf("12 midnight\n");

        ho++;
    }
    
return 0;
}
