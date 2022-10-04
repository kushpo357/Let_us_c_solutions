#include <stdio.h>
void prime(int *);
int main()
{
    int num;
    printf("enter num : ");
    scanf("%d", &num);
    prime(&num);
    printf("\n");
    return 0;
}
void prime(int *num)
{
    int t = 2, su;
    if (*num == 1)
        return;
    else
        {
             while(*num)
                {if (!(*num % t))
                    {
                        su = t;
                        break;
                    }
                 else
                    t++;
                }
            printf("%d ",su);
            *num = *num / su;
            prime(num);
        }
}
