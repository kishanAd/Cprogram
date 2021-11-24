/* 
  @Author : Kishan Adhikari
  @Filename: bitwiseoddeven.c
  @CreatedDate: 2021/07/10

  To check odd or even using bitwise operator
*/

#include <stdio.h>
int main()
{
  int num;
  printf("Enter any number:\n");
  scanf("%d", &num);
  switch (num & 1)   //bitwise and
  {
  case 0:
    printf("%d is an even number.\n", num);
    break;

  case 1:
    printf("%d is a odd number\n", num);
    break;
  }
  return 0;
}