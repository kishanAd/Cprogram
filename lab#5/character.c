
/* @Author: Kishan Adhikari
  @Filename: company.c
  @Created Date: 2078/05/10
  @Description:Read characters from file “filec.txt” created in question 1. 
  Also count the number of characters in the file (use fputs() and fgets() function).
*/

#include <stdio.h>
int main()
{
  FILE *fptr;
  int count = 0;
  char ch;
  fptr = fopen("filec.txt", "r");
  if (fptr == NULL)
  {
    printf("Error opening File");
    return -1;
  }
  while ((ch = getc(fptr)) != EOF) //we consider white space as a character
  {
    count++;
  }
  fclose(fptr);
  printf("Total number of character is %d:\n", count);
}