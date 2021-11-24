/*
H
HE
HEL
HELL
HELLO
HELL
HEL
HE
H
*/
#include <stdio.h>
int main()
{
  char word[] = "HELLO";
  int i, j, k = 4;
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j <= i; j++)
    {
      printf("%c", word[j]);
    }
    printf("\n");
  }
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < k; j++)
    {
      printf("%c", word[j]);
    }
    k--;
    printf("\n");
  }
}