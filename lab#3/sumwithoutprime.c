/*
  Author: Kishan Adhikari
  Created Date: 2078/04/30
  Filename:sumwithoutprime.c
  Description:program to print sum of series excluding prime numbers
  series : Y=1+1/(1!)+(2^2/2!)+......+(10^2/10!)
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

int main()
{

  int num, i, count;
  float sum = 0, prime_sum = 0;
  for (int j = 1; j <= 10; j++)
  {
    sum += (float)(j * j) / fact(j);
  }
  sum += 1;

  for (num = 1; num <= 10; num++)
  {

    count = 0;

    for (i = 2; i <= num / 2; i++)
    {
      if (num % i == 0)
      {
        count++;
        break;
      }
    }

    if (count == 0 && num != 1)
      prime_sum += (float)(num * num) / fact(num);
  }

  printf("Sum of series excluding prime number is: %.2f\n", sum - prime_sum);

  return 0;
}
