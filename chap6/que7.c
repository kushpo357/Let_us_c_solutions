#include <stdio.h>
#include <math.h>
int main()
{
    int a = 1, b = 1, c = 1, d = 1;
    int cu1, cu2;
    for (a = 1; a <= 1000; a++)
    {
        for (b = a; b <= 1000; b++)
        {
            cu1 = pow(a, 3) + pow(b, 3);
            for (c = a+1; c <= 1000; c++)
            {
                if (c == a || c == b)
                    continue;
                for (d = c; d <= 1000; d++)
                {
                    cu2 = pow(c, 3) + pow(d, 3);
                    if(cu1 > 100000 || cu2 > 100000) continue;
                    if (cu1 == cu2)
                        printf("a is %d , b is %d, c is %d , d is %d \n %d\n",a,b,c,d, cu2);
                }
            }
        }
    }
}