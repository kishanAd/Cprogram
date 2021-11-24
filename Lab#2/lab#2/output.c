/*
@Filename:output.c
@Author:Kishan Adhikari
@Created Date:2021/07/20

Given x=3.0, y=12.5, z= 523.3, A=300.0, B=1200.5, C=5300.3, Write a program to display
the following (hint: use formatted output):

x       y       z       =        |3.0    |12.5           |523.3
a       b       c       =        |300.0  |1200.5         |5300.3
----------------------------------------------------------------------------------
x       y       z       =        |        3.00|           12.50|           523.30|
a       b       c       =        |      300.00|         1200.50|          5300.30|
*/
#include <stdio.h>
int main()
{
  float x = 3.0, y = 12.5, z = 523.3, A = 300.0, B = 1200.5, C = 5300.3;
  printf("\n");
  printf("x\ty\tz\t=\t |%.1f\t |%.1f\t\t |%.1f\n", x, y, z);

  printf("a\tb\tc\t=\t |%.1f\t |%.1f\t |%.1f\n", A, B, C);

  for (int i = 0; i < 85; i++)
  {
    printf("-");
  }
  printf("\n");
  printf("x\ty\tz\t=\t |\t  %.2f|\t\t  %.2f|\t   %.2f|\n", x, y, z);

  printf("a\tb\tc\t=\t |\t%.2f|\t\t%.2f|\t  %.2f|\n", A, B, C);
  return 0;
}