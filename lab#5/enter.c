/* @Author: Kishan Adhikari
  @Filename: enter.c
  @Created Date: 2078/05/10
  @Description:Write characters into a file “filec.txt”. The set of characters are read from the keyboard until
  an enter key is pressed (use putc() and getc() function).
*/
#include <stdio.h> //linking section
#include <stdlib.h>

//main function

int main()
{
  char ch;
  FILE *fptr;
  fptr = fopen("filec.txt", "w+");
  if (fptr == NULL)
  {
    printf("Error opening file");
    exit(0);
  }
  printf("Enter text to enter\n");
  while ((ch = getchar()) != '\n')
  {

    putc(ch, fptr);
  }
  fclose(fptr);
  printf("Text on file is\n");
  fptr = fopen("filec.txt", "r");
  while ((ch = getc(fptr)) != EOF)
  {                   // reading each character from file
    printf("%c", ch); // displaying each character on to the screen
  }
  printf("\n");
  fclose(fptr);
  return 0;
}
