#include <stdio.h>
int main()
{
    int co = 1, pop = 100000;
    printf("current population = 100000\n");
    while (co <= 10)
    {
        pop = pop / 11 * 10;
        printf("populatuion %d years ago = %d\n", co, pop);
        co++;
    }
        
    return 0;
}