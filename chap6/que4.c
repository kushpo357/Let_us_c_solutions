#include <stdio.h>
int main()
{
  int c = 1;
  float x, n, sum;
  printf("enter x for log(x) : ");
  scanf("%f", &x);
  sum = (x - 1) / (2 * x);
  n = 0.5;
  while (c <= 7)
  {
    n = n * (x - 1) / x;
    sum = sum + n;
    c++;
  }
    printf("sum = %f\n", sum);
  
  return 0;
}