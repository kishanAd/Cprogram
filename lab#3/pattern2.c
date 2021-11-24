/*
  Author: Kishan Adhikari
  Filename: pattern.c
  Created Date: 2078/04/27
  Description: program to print following series
  1  6  10 13 15 
  2  7  11 14 
  3  8  12 
  4  9  
  5 
*/

#include <stdio.h>

int main()
{
  int i, j, k;
  for (i = 1; i <= 5; i++)
  {
    k = i;

    for (j = 5; j >= i; j--)
    {
      printf("%-3d", k);
      k = k + j;
    }
    printf("\n");
  }
}
