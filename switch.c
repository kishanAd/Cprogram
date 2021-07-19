/*
  Write a program to check whether input alphabet is vowel or not using if-else and switch
  statement.
*/

#include <stdio.h>
int main()
{
  char input;
  printf("Enter any character: ");
  scanf("%c", &input);
  int lowercase = (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u'); //gives 1 if vowel is input
  int uppercase = (input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U');
  switch (lowercase || uppercase)
  {
  case 1:
    printf("%c is vowel\n", input);
    break;

  default:

    printf("%c is composite\n", input);
    break;
  }
  return 0;
}