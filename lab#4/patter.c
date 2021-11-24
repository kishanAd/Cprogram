#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  // variables
  char str[] = "UNIVERSITY";
  int len, place;

  len = strlen(str);

  // printf("len=%d\n", len);

  // outer loop for row
  for (int i = 0; i < (len - 1); i++)
  {
    // find the place
    if (i < len)
      place = i;
    else
      place = abs(2 * len - i);

    for (int j = 0; j <= place; j++)
    {
      // if (i == 1 || j == 1)
      // {

      printf("%c", str[j]);
      //       }
    }

    return 0;
  }
}