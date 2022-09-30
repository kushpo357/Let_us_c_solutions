#include <stdio.h>
int main()
{
    int class, subf, grace;
    printf("enter class (1,2,3) : ");
    scanf(" %d", &class);
    printf("enter number of subjects failed : ");
    scanf(" %d", &subf);
    
    switch (class)
    {
    case 1:
        if (subf > 3)
            grace = 0;
        else
            grace = 5;
        break;
    case 2:
        if (subf > 2)
            grace = 0;
        else
            grace = 4;
        break;
    case 3:
        if (subf > 1)
            grace = 0;
        else
            grace = 5;
        break;
    }
    printf("grace marks = %d\n", grace);
    return 0;
}
