#include <stdio.h>
#define MEAN(a,b) ((a + b) / 2)
#define ABS(x) (x<0?(-1)*x:x)
#define LOW(c) (c + 32)
#define BIGGEST(a,b,c) (a>b?(a>c?a:c):(b>c?b:c))
int main()
{
    	int a,b,d,e,f,g;
	char c;
	printf("enter two numbers (a b) two find their mean: ");
	scanf("%d %d",&a ,&b);
	//a = 1 ;b = 3;
	printf("mean = %d\n",MEAN(a,b));
    	printf("enter number whose absolute value is to be found : ");
	scanf("%d",&a);
    	//a = 0 ;
    	printf("absolute value = %d\n",ABS(a));
    	printf("enter upper case letter : ");
	fflush(stdin);
    	//c = 'C';
    	scanf("%c",&c);
    	printf("lower case letter = %c\n", LOW(c));
    	printf("enter three numbers (a b c) : ");
    	//a = 1 ;b = 3; d = 24;
    	scanf("%d %d %d",&a ,&b ,&d);
    	printf("greatest value = %d\n",BIGGEST(a,b,d));
	return 0;
}
