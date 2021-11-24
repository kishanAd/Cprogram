// /*
//   @Author : Kishan Adhikari
//   @Filename: swipe.c
//   @CreatedDate: 2021/07/09

//   Write a program to swap two variables values without using third variables
// */

#include <stdio.h>
// int main()
// {
//   char a, b;
//   printf("Enter value of a:\n");
//   scanf(" %c", &a);   // whitespace before %c is required to read next line
//   printf("Enter value of b\n");
//   scanf(" %c", &b);
//   printf("Value before swapping is: a=%c,b=%c\n", a, b);
//   a = a + b; //a=4,b=5,a=9
//   b = a - b; //b=9-5:b=4
//   a = a - b; //b=4:a=9-4:a=5

//   printf("value after swapping is: a=%c,b=%c\n", a, b);
//   return 0;
// }

int main()
{

  char a, b, temp;
  printf("Enter value of a:\n");
  scanf(" %c", &a); // whitespace before %c is required to read next line
  printf("Enter value of b\n");
  scanf(" %c", &b);
  printf("Value before swapping is: a=%c,b=%c\n", a, b);

  temp = a;
  a = b;
  b = temp;

  printf("Value after swapping is a=%c,b=%c\n", a, b);
}