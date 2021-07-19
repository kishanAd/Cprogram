/*
Write a program that asks a number and test the number whether it is multiple of 5 or not,
divisible by 7 but not by eleven.
*/
#include <stdio.h>
int main()
{
  int num;
  printf("Enter a number:\n");
  scanf("%d", &num);
  if (num % 5 == 0)
  {
    printf("%d is multiple of 5\n", num);
  }
  else if (num % 7 == 0 && num % 11 != 0)
  {
    printf("%d is multiple of 7 but not of 11\n", num);
  }
  else
  {
    printf("%d is not multiple of 5 and 7.\n", num);
  }
  return 0;
}