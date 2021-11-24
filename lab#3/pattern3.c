/*
program to print pattern
        *
      * * *
    * * * * *
  * * * * * * *
  
*/
#include <stdio.h>

int main()
{
  int i, j;
  char str[] = "PROGRAMMING";

  for (i = 0; i < 6; i++)
  {
    for (j = i; j < 11 - i; j++)
    {
      putchar(str[j]);
    }
    putchar('\n');
  }

  return (0);
}