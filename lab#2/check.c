/*
@Filename:check.c
@Author:Kishan Adhikari
@Created Date:2021/07/20
Write a program to take a character input from keyboard and check if it is a number or
alphabet or special character using character functions below:
a. Alphanumeric => isalnum()
b. Blank character => isblank()
c. Alphabetic => isalpha()
d. Control character => iscntrl()
e. Number-digit => isdigit()
f. Upper case => isupper()
g. Lower case => islower()
h. Hexadecimal digit => ixdigit()
i. Graphical character => isgraph()

*/

#include <stdio.h>
#include <ctype.h> //library to check type of character
int main()
{
  char c;
  printf("Enter any character:\n");
  scanf(" %c", &c);

  if isalnum (c)
  { //1,2,4
    printf("%c is a alphanumeric.\n", c);
  }

  if isblank (c)
  {
    printf("%c is a blank.\n", c);
  }

  if isalpha (c) //a,A,b,c
  {
    printf("%c is a alphabet.\n", c);
  }

  if iscntrl (c)
  {
    printf("%c is a control character.\n", c);
  }

  if isdigit (c) //1,2,3
  {
    printf("%c is a digit.\n", c);
  }

  if isupper (c) //"A","B"
  {
    printf("%c is a Uppercase.\n", c);
  }

  if islower (c) //"a","b","c"
  {
    printf("%c is a lowercase.\n", c);
  }
  if isxdigit (c) //hexadecimal
  {
    printf("%c is a hexadecimal.\n", c);
  }

  if isgraph (c) //that form ASCII arts
  {
    printf("%c is a graphical character.\n", c);
  }

  return 0;
}