#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, a, fac, co;
    printf("enter number :");
    scanf(" %d", &num);
    printf("\n1 : factorial\n2 : prime\n3 : odd or even\n4 : exit\n");
    printf("your choice: ");
    scanf(" %d", &a);

    switch (a)
    {
    case 1:
        fac = num;
        while (--num >= 1)    
        fac = fac * num;
        
        printf("factorial = %d", fac);
        break;

    case 2:
            co = 2;
        while (co <= num)
        {
            if (!(num % co))
                break;
            co++;
        }
        if (co == num)
        printf("prime");
        else
        printf("not prime");
        break;
    
    case 3:
        if (num % 2)
            printf("odd");
        else
            printf("even");
    
    case 4:
        exit(0);
    }    
    printf("\n");
    return 0;
}
