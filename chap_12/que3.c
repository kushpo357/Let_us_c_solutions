#include <stdio.h>
#include "que3.h"
int main()
{
    int p, r, t, si;
    p = 1000; r = 2 ;t = 10;
    si = SIIN(p,r,t);
    printf("simple interest = %d amount = %d\n",si,AMOUNT(si,p));
return 0;
}
