/*
  Author: Kishan Adhikari
  Filename: squarepattern.c
  created date: 2078/04/25
  Description: Program to print following pattern
  1
  1       4
  1       4       9
  1       4       9       16
  1       4       9       16      25
*/

#include <stdio.h>
int main()
{
  int i, j;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d\t", j * j);
    }
    printf("\n");
  }
}