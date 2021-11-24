/*
  @Author : Kishan Adhikari
  @File name: nepal.c
  @Created Date:2021/04/30
  @Description: program to flag of nepal.
*/
#include <stdio.h>
int main()
{
  int i, j, n;
  printf("Enter value of n:");
  scanf("%d", &n);
  for (int k = 0; k < 2; k++)
  {
    for (i = 0; i < n; i++)
    {
      for (j = 0; j <= i; j++)
      {
        printf("*");
      }
      printf("\n");
    }
  }
  return 0;
}