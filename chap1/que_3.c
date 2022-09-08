#include <stdio.h>
int main()
{
	int l, b, t;
	l = 1189;
	b = 841;
	printf("A0 paper size: Length = %d, Breadth = %d\n", l, b);
	t = l;
	l = b;
	b = t / 2;
	printf("A1 paper size: Length = %d, Breadth = %d\n", l, b);
	t = l;
	l = b;
	b = t / 2;
	printf("A2 paper size: Length = %d, Breadth = %d\n", l, b);
	t = l;
	l = b;
	b = t / 2;
	printf("A3 paper size: Length = %d, Breadth = %d\n", l, b);
	t = l;
	l = b;
	b = t / 2;
	printf("A4 paper size: Length = %d, Breadth = %d\n", l, b);
	t = l;
	l = b;
	b = t / 2;
	printf("A5 paper size: Length = %d, Breadth = %d\n", l, b);
	t = l;
	l = b;
	b = t / 2;
	printf("A6 paper size: Length = %d, Breadth = %d\n", l, b);
	t = l;
	l = b;
	b = t / 2;
	printf("A7 paper size: Length = %d, Breadth = %d\n", l, b);
	t = l;
	l = b;
	b = t / 2;
	printf("A8 paper size: Length = %d, Breadth = %d\n", l, b);
	return 0;
}
