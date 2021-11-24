#include <stdio.h>
#include <string.h>
int main()
{
  char word[] = "UNIVERSITY";
  int i, j, len, place;
  len = strlen(word);

  for (i = 0; i < len; i++)
  {
    if (i < len)
      place = i;
    else
      place = (2 * len - 1);
    for (j = 0; j <= place; j++)
    {
      // if (i % 2 != 0)
      // {
      //   printf("%c", word[j]);
      // }
      // else{
      //   continue;
      // }
      printf("%c", word[j]);
    }
    printf("\n");
  }
}