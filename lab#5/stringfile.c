/* @Author: Kishan Adhikari
  @Filename: structandfunc.c
  @Created Date: 2078/05/10
  @Description:Write set of strings each of length 40 into a file “stringc.txt” and display it (use fputs() and
  fgets() function).
*/

#include <stdio.h>
int main()
{
  char str[40];

  FILE *file_ptr;
  file_ptr = fopen("stringc.txt", "w+");

  printf("Enter string:\n");
  fgets(str, 40, stdin);
  fputs(str, file_ptr);
  fclose(file_ptr);
  FILE *fptr = fopen("stringc.txt", "r");
  char line[500];
  printf("Text on file is:\n");
  while (fgets(line, sizeof(line), fptr))
  {
    printf("%s", line);
  }
  fclose(fptr);
  return 0;
}
