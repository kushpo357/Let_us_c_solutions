#include <stdio.h>
int main()
{
    // to convert the given number in the octal format
    int a, num, b = 0, c = 1;
    printf("enter number to be changed into octal : ");
    scanf(" %d", &num);
    while (num > 0) //since we devide continusly by 8 in int form
    {
        a = num % 8;
        num /= 8;      //to drop the power of 8 subtracting a from num is not required
        b = b + c * a; //forming octal number
        c = c * 10;    //for mounting powers of 10
    }
    printf("equivalent octal number = %d\n", b);
    return 0;
}
