#include <stdio.h>
int main()
{ //    to find the factorial of given number
    int num, fac;
    printf("enter number :");
    scanf("%d", &num);
    fac = num;
    while (--num >= 1)    
        fac = fac * num;

    if (fac < 0){
	    printf("Invalid number\n");
	    fac = 0;
    }
    else if (fac == 0){
	    fac = 1;
    	    printf("factorial = %d\n", fac);
    }
    else
    	    printf("factorial = %d\n", fac);

    return 0;
}
