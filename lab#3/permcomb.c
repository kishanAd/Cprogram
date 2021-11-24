/*
  Author: Kishan Adhikari
  Created Date: 2078/04/30
  Filename:permcomb.c
  Description:Define a function named fact() to calculate factorial of a number n and then write a program
  that uses this function fact() to calculate combination and permutation.
*/

#include <stdio.h>
int fact(int num)
{
  int facto = 1;
  if (num < 0)
  {
    printf("Factorial of negative doesnt exists\n");
  }
  if (num == 0)
  {
    return 1;
  }

  for (num; num >= 1; num--)
  {
    facto = facto * num;
  }
  return facto;
}
int permut(int num, int r)
{

  return fact(num) / fact(num - r);
}
int combt(int num, int r)
{

  return fact(num) / (fact(num - r) * fact(r));
}

int main()
{
  int num1, num2;
  printf("Enter value of n and r:\n");
  scanf("%d%d", &num1, &num2);
  printf("The value of %d permutation %d is %d\n", num1, num2, permut(num1, num2));
  printf("The value of %d combination %d is %d\n", num1, num2, combt(num1, num2));
  return 0;
}
