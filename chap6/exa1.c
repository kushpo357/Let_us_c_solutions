#include <stdio.h>
int main()
{ //to find prime numbers upto 30 
    int loop = 1, co;
    printf("prime numbers upto 30 are : \n");
    while (++loop <= 300)
    {
        co = 2;
        while (co <= loop)
        {
            if (!(loop % co))
                break;
            co++;
        }

        if (co == loop)
            printf("%d ", loop);
    }
    printf("\n");
    return 0;
}