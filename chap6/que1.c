#include <stdio.h>
int main()
{
    int co, num;
    printf("enter num : ");
    scanf("%d",&num);
    printf("Multiplication table is as follows\n");
    for (co = 1; co <= 10; co++)
    {
        printf("%d * %d = %d\n", num, co, num * co);
    }
    
return 0;
}