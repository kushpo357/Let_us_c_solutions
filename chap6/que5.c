#include <stdio.h>
#include <math.h>
int main()
{   // to find pythagorean triplets upto 30
    int a = 1, b, c;
    while (a <= 30)
    {
        b = a;
        while ( b <= 30)
        {
            c = b;
            while ( c <= 30)
            {
                if (a*a + b*b == c*c)
                {
                    printf("%d %d %d\n", a, b, c);
                }

                c++;
            }

            b++;
        }

        a++;
    }
    
    return 0;
}