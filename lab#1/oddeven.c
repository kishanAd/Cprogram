/* 
  @Author : Kishan Adhikari
  @Filename: oddeven.c
  @CreatedDate: 2021/07/10

  To check odd or even using modulus operator
*/

#include <stdio.h>
int main()
{
  int num;
  printf("Enter any number:\n");
  scanf("%d", &num);
  (num % 2 == 0) ? printf("%d is an even\n", num) : printf("%d is a odd\n", num);  //ternary operator 
  return 0; //exit status 
