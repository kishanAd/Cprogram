/* 
  @Author : Kishan Adhikari
  @Filename: declare.c
  @CreatedDate: 2021/07/09

  Write a program to declare two integers and one float variables then initialize them to 10,
  15, and 12.6. Also print the variable values in the screen.
*/

#include <stdio.h> //header file
int main()
{
  int n1, n2;
  float f1;
  n1 = 10;
  n2 = 15;
  // f1 = 12.6;
  int b = ++n1 + ++n1;
  int c = ++n2;
  printf("The number are:\n b=%d\n c=%d\n f1=%.2f\n", b, c, f1); //printing variables
  // return 0;                                                          //exit status
}
