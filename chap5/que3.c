#include <stdio.h>
int main()
{
    int a, b, m = 21;
    printf("MATCHSTICK GAME\n\n");
    printf("rules : 1.there are 21 matchsticks \n");
    printf("        2.you can pick either 1,2,3 or 4 matchsticks\n");
    printf("        3.after you have chosen the computer will pick matchsticks with same logic\n");
    printf("        4.whoever picks up the last matchstick looses");

    while (m > 1)
    {
        printf("\n\npick up matchsticks :");
        scanf("%d", &a);
        if (a > 4 || a < 1)
            continue;//restarts loop
        b = 5 - a;
        printf("computer picks %d matchsticks\n", b);
        printf("matshsticks left = %d", m - 5);
        m = m - 5;
    }

    printf("\n\n matchsticks left : %d ", m);
    printf("\nWinner computer\n");

    return 0;
}
