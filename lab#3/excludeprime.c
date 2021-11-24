/*
  @Author : Kishan Adhikari
  @File name: excludeprime.c
  @Created Date:2021/04/30
  @Description: program to find sum as Y of the following series excluding prime number in the
  series. (Write function program to check whether the number is prime or not. also write
  recursive function to calculate the factorial of the series numbers)
*/

#include <stdio.h>
int facto(int num)
{
  if (num <= 0)
  {
    return 1;
  }
  return num * facto(num - 1);
}

int check_prime(int num)
{
  int count;
  for (int i = 2; i <= (num / 2); i++)
  {
    count = 0;
    if (num % i == 0)
    {
      count++;
      break;
    }
  }
  if (count == 0)

    printf("%d is a prime number.\n", num);
  else
  {
    printf("%d is a composite number.\n", num);
  }
}
float sum_of_prime()
{
  float prime_sum = 0;
  int i, j, count;
  for (i = 1; i <= 10; i++)
  {
    count = 0;

    for (j = 2; j <= (i / 2); j++)
    {
      if (i % j == 0)
      {
        count++;
        break;
      }
    }
    if (count == 0 && i != 1)
    {
      prime_sum += (float)(i * i) / facto(i);
    }
  }
  return prime_sum;
}

int main()
{
  float sum = 0;
  for (int i = 1; i <= 10; i++)
  {
    sum += (float)(i * i) / facto(i);
  }
  sum += 1;

  printf("Sum of series excluding prime number is %.2f\n", sum - sum_of_prime());
}