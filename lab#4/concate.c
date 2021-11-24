/*  
    @Author: Kishan Adhikari
    @Created Date: 2078/05/06
    @filename: concate.c
    @Description:Program to concatenate two strings.
  */

#include <stdio.h>
#include <string.h>

int main()
{
  char str1[100], str2[100];
  printf("Enter first string:");
  // fgets(str1, 100, stdin);
  scanf("%s", str1);
  printf("Enter second string:\n");
  // fgets(str2, 100, stdin);
  scanf("%s", str2);
  strcat(str1, str2); //concatente str2 to str1
  printf("The concatenate string is: %s\n", str1);

  return 0;
}