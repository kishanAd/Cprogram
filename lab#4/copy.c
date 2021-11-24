/*  
    @Author: Kishan Adhikari
    @Created Date: 2078/05/04
    @filename: copy.c
    @Description:Program to copy one string to another string with and without using string handling
    function.
*/
#include <stdio.h>
int main()
{
  char org[1000], copied[1000];
  int i;
  printf("Enter a string:");
  fgets(org, sizeof(org), stdin);
  for (i = 0; org[i] != '\0'; i++)
  {
    copied[i] = org[i];
  }
  copied[i] = '\0';
  printf("Copied string is: %s", copied);
  return 0;
}