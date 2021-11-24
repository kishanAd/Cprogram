/*
@Filename:display.c
@Author:Kishan Adhikari
@Created Date:2021/07/20

Write a program to produce the output as shown below:
x     y         expressions    results
6 |   3   |     x=y+3          6
6 |   3   |     x=y-2          1
6 |   3   |     x=y*5          15
6 |   3   |     x=x/y          2
6 |   3   |     x=x%y          0
*/
#include <stdio.h>
int main()
{
  int x = 6, y = 3;
  printf("x\ty\texpressions\tresults\n");
  printf("%d |\t%d  |\tx=y+3   |\t%d\n", x, y, y + 3); //\t is tab spacing
  printf("%d |\t%d  |\tx=y-2   |\t%d\n", x, y, y - 2);
  printf("%d |\t%d  |\tx=y*5   |\t%d\n", x, y, y * 5);
  printf("%d |\t%d  |\tx=x/y   |\t%d\n", x, y, x / y);
  printf("%d |\t%d  |\tx=x%y   |\t%d\n", x, y, x % y);
  return 0;
}
