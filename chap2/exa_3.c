#include <stdio.h>
int main()
{ //to find the smallest amount of notes to make up the given amount
    int cu, num, a;
    printf("enter the amount : ");
    scanf(" %d", &cu);
    a = cu / 100;
    cu = cu % 100;
    num = a;
    a = cu / 50;
    cu = cu % 50;
    num = num + a;
    a = cu / 10;
    cu = cu % 10;
    num = num + a;
    a = cu / 5;
    cu = cu % 5;
    num = num + a;
    a = cu / 2;
    cu = cu % 2;
    num = num + a;
    a = cu / 1;
    num = num + a;
    printf("minimum amount of notes required are : %d",num);
    return 0;
}