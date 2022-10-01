#include <stdio.h>
int roman(int, char, int);
int main()
{
    int num;
    char ro;
    do
    {
        printf("enter number : ");
        fflush(stdin);
        scanf("%d",&num);
        if (num > 4999)
            printf("num above limit");
        else 
            break;
        
    } while (num > 4999);

    printf("Roman numeral for the given number is : ");

    num = roman(num, 'M', 1000);
    num = roman(num, 'D', 500);
    num = roman(num, 'C', 100);
    num = roman(num, 'L', 50);
    num = roman(num, 'X', 10);
    num = roman(num, 'V', 5);
    num = roman(num, 'I', 1);
    
    printf("\n");

    return 0;
}
int roman(int num, char ro, int ch)
{
    int med, i, nnum;
    med = num / ch;
    for ( i = 1; i <= med; i++)
    {
        printf("%c", ro);
    }
    nnum = num - med * ch; 
    return nnum;
}
