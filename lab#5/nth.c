/* @Author: Kishan Adhikari
   @Filename: patt.c
   @Description: Program to print following pattern:
  U N 
  U N I V 
  U N I V E R 
  U N I V E R S I 
  U N I V E R S I T Y 
  U N I V E R S I 
  U N I V E R 
  U N I V 
  U N


*/
#include <stdio.h>
int main()
{
  char word[] = "UNIVERSITY";
  int i, j, n = 2, k = 8;
  for (i = 0; i < 5; i++) //print 5 row
  {
    for (j = 0; j < n; j++)
    {
      printf("%c ", word[j]);
    }
    n += 2;
    printf("\n");
  }
  for (i = 6; i < 10; i++)
  {
    for (j = 0; j < k; j++)
    {
      printf("%c ", word[j]);
    }
    k -= 2;
    printf("\n");
  }
  return 0;
}