/*
  @Author : Kishan Adhikari
  @Filename: initialize.c
  @CreatedDate: 2021/07/09

  Write a C program to prompt the user to input 3 integer values and print these values in
  forward and reversed order.

*/

#include <stdio.h>
int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c); //scanf function to get user input and & to save memory address
  printf("The number entered in order are : %d,%d ,%d.\n", a, b, c);
  printf("The number entered in reversed order are : %d,%d ,%d.\n", c, b, a);
  return 0;
}