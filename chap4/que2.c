#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  float r, g, b, W, C, M, Y, B;
  printf("enter vlaues for colours in (RGB) format (from 0-255) : ");
  scanf("%f %f %f", &r, &g, &b);

  if (!(r <= 255 && g <= 255 && b <= 255))
    printf("invalid input\n");
  else
  {
    W = (r >= g ? (r >= b ? r : b) : (g >= b ? g : b));
    W = W / 255;
    C = (W - r / 255) / W;
    M = (W - g / 255) / W;
    Y = (W - b / 255) / W;
    B = 1 - W;

    printf("White = %f Cyan = %fMagenta = %f Yellow = %f Black = %f\n", W, C, M, Y, B);
  }

  return 0;
}
