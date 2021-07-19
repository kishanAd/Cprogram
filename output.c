/*
Given x=3.0, y=12.5, z= 523.3, A=300.0, B=1200.5, C=5300.3, Write a program to display
the following (hint: use formatted output):
*/
#include <stdio.h>
int main()
{
  float x = 3.0, y = 12.5, z = 523.3, A = 300.0, B = 1200.5, C = 5300.3;
  printf("\n");
  printf("x\ty\tz\t=\t |%.1f\t |%.1f\t\t |%.1f\n", x, y, z);

  printf("a\tb\tc\t=\t |%.1f\t |%.1f\t |%.1f\n", A, B, C);

  for (int i = 0; i < 100; i++)
  {
    printf("-");
  }
  printf("\n");
  printf("x\ty\tz\t=\t |%.2f\t\t |%.2f\t\t |%.2f\n", x, y, z);

  printf("a\tb\tc\t=\t |%.2f\t |%.2f\t |%.2f\n", A, B, C);
  return 0;
}