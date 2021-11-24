/*
@Filename:macros.c
@Author:Kishan Adhikari
@Created Date:2021/07/20
Given the three numbers a(=8), b(=4),c and constant value PI=3.1415, calculate and display
the following result using macros (preprocessor directives)
a. c= PI * mult(a,b) //the macro mult(a,b) perform the multiplication of a & b(a*b)
b. c= PI * sum(a,b) //the macro mult(a,b) perform the sum of a & b (a+b)
c. c= PI * sub(a,b) //the macro mult(a,b) perform the subtraction of a & b (a-b)
d. c= PI * div(a,b) //the macro mult(a,b) perform the division of a & b (a/b)
*/

#include <stdio.h>
#define PI 3.14
#define mult(a, b) a *b //preprocessor as a function
#define sum(a, b) a + b
#define sub(a, b) a - b
#define div(a, b) a / b
int main()
{
  int a = 8, b = 4;
  printf("The value of a+b is: %d\n", sum(a, b));
  printf("The value of a-b is: %d\n", sub(a, b));
  printf("The value of a*b is: %d\n", mult(a, b));
  printf("The value of a/b is: %d\n", div(a, b));
  return 0;
}