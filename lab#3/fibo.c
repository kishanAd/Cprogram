/*
  Author: Kishan Adhikari
  Created Date: 2078/04/28
  Filename:fibo.c
  Description:recursive function to print fibonacci series
*/

#include <stdio.h>

int fibo(int n)
{
  if (n <= 1)
  {
    return n;
  }
  return fibo(n - 1) + fibo(n - 2);
}
int main()
{
  int num;
  printf("Enter upto which you want fibonacci series\n");
  scanf("%d", &num);
  for (int i = 0; i < num; i++)
  {
    printf("%d\n", fibo(i));
  }
  return 0;
}
