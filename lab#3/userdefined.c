/*
  @Author : Kishan Adhikari
  @File name: userdefined.c
  @Created Date:2021/04/30
  @Description: program to add, subtract, multiply and divide two integers using user defined type
  function with return type..
*/
#include <stdio.h>
int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
float divide(int num1, int num2);
int main()
{
  int a, b;
  printf("Enter two numbers:\n");
  scanf("%d%d", &a, &b);
  printf("The value of a+b is: %d\n", add(a, b));
  printf("The differences of a and b is: %d\n", subtract(a, b));
  printf("The Product of a and b is: %d\n", multiply(a, b));
  printf("The Value of a/b is: %.2f\n", divide(a, b));

  return 0;
}
int add(int num1, int num2)
{
  return num1 + num2;
}
int subtract(int num1, int num2)
{
  return num1 - num2;
}
int multiply(int num1, int num2)
{
  return num1 * num2;
}
float divide(int num1, int num2)
{
  return (float)num1 / num2;
}