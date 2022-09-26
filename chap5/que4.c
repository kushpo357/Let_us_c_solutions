#include <stdio.h>
int main()
{
    int p=0, n=0, z=0, num;
    char q='y';
    while (q != 'n')
    {
        printf("enter num :");
        scanf("%d",&num);
        if(num>0)
            p++;
        else if(num<0)
            n++;
        else
            z++;
        fflush(stdin);//clears standard input stream
        printf("do you want to continue (y/n) : ");
        scanf(" %c",&q);
    }
    
    printf("negative numbers = %d\n",n);
    printf("positive numbers = %d\n",p);
    printf("zeroes = %d\n",z);
return 0;
}
