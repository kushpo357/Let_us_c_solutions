#include <stdio.h>
int main()
{
    float num;
    printf("enter number : ");
    scanf("%f",&num);

    if(num>=0)
        printf("\nabsolute value : %f\n",num);
    else
        printf("\nabsolute value : %f\n",num*(-1));
return 0;
}
