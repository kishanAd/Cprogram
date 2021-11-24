/*@Filename:ASCII.c
@Author:Kishan Adhikari
@Created Date:2021/07/20
Write a program to take a character input from keyboard and check if it is a number or
alphabet or special character using ASCII CODE
*/

#include <stdio.h>
int main()
{
  char ch;

  printf("Enter character :\n");
  scanf("%c", &ch);

  printf("%c=%d\n", ch, ch);
  if (ch >= 97 && ch <= 122) //lowercase character  has ascii value between 97 to 122
  {
    printf("%c is lowercase alphabet\n", ch);
  }
  else if (ch >= 65 && ch <= 90) //uppercase character  has ascii value between 65 to 90
  {
    printf("%c is uppercase character\n", ch);
  }
  else if (ch >= 48 && ch <= 57) //number has ascii value between 48 to 57
  {
    printf("%c is a number\n", ch);
  }
  else if (ch >= 0 && ch <= 31 || ch == 127) //control character has ascii value between 0 to 31 and 127 (tab,enter)
  {
    printf("%c is a control character\n", ch);
  }
  else if (ch >= 128 && ch <= 255) //graphical character has ascii valuebetween 128 to 255
  {
    printf("%c is a graphical character\n", ch);
  }
  else if (ch >= 32 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 && ch >= 93 || ch <= 123 && ch <= 126) //special character has ascii valuebetween 32 to 47 (!,@,#)
  {
    printf("%c is a special character\n", ch);
  }
  return 0;
}