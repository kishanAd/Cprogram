/* 
  @Author : Kishan Adhikari
  @Filename: oddeven.c
  @CreatedDate: 2021/07/11

  
  Write a program To check odd or even using modulus operator
  */
#include <stdio.h>
int main()
{
  int num;
  printf("Enter any number:\n");
  scanf("%d", &num);  //get input fromuser
  if (num % 2 == 0)  //check condition
  {
    printf("%d is an even number\n", num);
  }
  else
  {
    printf("%d is a odd number\n", num);
  }
  return 0;
}