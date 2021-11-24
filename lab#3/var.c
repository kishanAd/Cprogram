/*
  Author : Kishan Adhikari
  Filename :var.c
  Created Date: 2078/04/29
  Description: Program to illustrate differences between static,global and local variables.
  
  local variables: The variables which are declared inside the function, compound statement (or block) are called Local variables.
  global variables: The variables declared outside any function are called global variables.
  static variables: A Static variable is able to retain its value between different function calls.
*/

#include <stdio.h>
int c = 250; //global variables as it is defined outside any function

void add();
void subtract();
int main()
{
  add();
  add();
  subtract();
  subtract();
}
void add()
{
  c = 200; //c is global variable and can be accessed by any function
  printf("The value of c=%d\n", c);
  int a = 100; //variable declared inside a function is called local variables. It cannot be accessed by other functions
  printf("The value of a=%d\n", a);
  c += 50;
}
void subtract()
{
  c = 35; //c is global variable and can be accessed by any function
  printf("The value of c=%d\n", c);
  static int d = 15; //d is static variable and value is attained in each function call
  printf("The value of d=%d\n", d);
  d++;
}