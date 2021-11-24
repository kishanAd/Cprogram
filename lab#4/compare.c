/*  
    @Author: Kishan Adhikari
    @Created Date: 2078/05/04
    @filename: compare.c
    @Description:Program to compare two strings.
  */

#include <stdio.h>
#include <string.h>
int main()
{
  char str1[50], str2[50];
  int value;
  printf("Enter string 1:");
  scanf("%s", str1);

  printf("Enter string 2:");
  scanf("%s", str2);
  value = strcmp(str1, str2);
  if (value == 0)
  {
    printf("Strings are same\n");
  }
  else
  {
    printf("Strings are different\n");
  }
  return 0;
}