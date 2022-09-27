#include <stdio.h>
int main()
{ //to write a sequence of numbers upto 3
    int c1, c2, c3;

    for (c1 = 1; c1 <= 3; c1++)
    {
        for (c2 = 1; c2 <= 3; c2++)
        {
            for (c3 = 1; c3 <= 3; c3++)
            {
                printf("%d %d %d\n", c1, c2, c3);
            }
        }
    }

    return 0;
}