/*
program to print following pattern

P
PU
PUL
PULC
PULCH
PULCHO
PULCHOW
PULCHOWK
*/
#include <stdio.h>
int main()
{
  int i, j;
  char word[] = "PULCHOWK";
  for (i = 0; i <= 7; i++)
  {
    for (j = 0; j <= i; j++)
    {
      putchar(word[j]);
    }
    putchar('\n');
  }
  return 0;
}
