/*
@Filename:display.c
@Author:Kishan Adhikari
@Created Date:2021/07/20
*/
#include <stdio.h>
// #include "conio.h"

int main()
{
  char name[30], address[100], age[3], weight, height;
  printf("Enter your name:\n");
  fgets(name, 30, stdin);
  printf("your name is:\n");
  puts(name);

  printf("Enter your address:\n");
  fgets(address, 100, stdin);
  printf("your address is :\n");
  puts(address);

  printf("Enter your age:\n");
  fgets(age, 266, stdin);
  printf("your age is:\n");
  puts(age);

  printf("Enter your weight in kg:\n");
  fgets(age, 256, stdin);
  printf("your weight is:\n");
  puts(age);

  printf("Enter your height:\n");
  height = getchar();
  printf("your height in feet is:\n");
  putchar(height);
  puts("\n");

  return 0;
}
