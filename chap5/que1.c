#include <stdio.h>
int main()
{
    int count=0;
    char a;
    printf("Printing all ascii values from 0 to 255\n");
    while (count<=255)
    {
        a=count;
        printf("%d = %c \n",count,a);
        count++;
    }
    
return 0;
}
