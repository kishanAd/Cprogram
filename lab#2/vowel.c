/*@Filename:vowel.c
@Author:Kishan Adhikari
@Created Date:2021/07/20
Write a program to check whether input alphabet is vowel or not using if-else and switch
statement.
*/
#include <stdio.h>
int main()
{
  char input;
  printf("Enter any alphabet: ");
  scanf("%c", &input);
  int lowercase = (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u'); //' ' is used in c for string
  int uppercase = (input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U');
  if (lowercase || uppercase)
  {
    printf("%c is a vowel\n", input);
  }

  else
  {
    printf("%c is consonant.\n", input);
  }
  return 0;
}