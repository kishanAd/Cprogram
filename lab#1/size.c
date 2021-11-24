/* 
  @Author : Kishan Adhikari
  @Filename: size.c
  @CreatedDate: 2021/07/13

  Write a program to print the size of char, float, double and long double data types in C

*/

#include <stdio.h>
int main()
{
  printf("type\t\t\tbytes\n");
  printf("char\t\t\t%zu\n", sizeof(char)); //sizeof function to get size in byte
  printf("float\t\t\t%zu\n", sizeof(float));
  printf("double\t\t\t%zu\n", sizeof(double));
  printf("longdouble\t\t%zu\n", sizeof(long double));
  return 0;
}