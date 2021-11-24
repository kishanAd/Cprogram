/*  
    @Author: Kishan Adhikari
    @Created Date: 2078/05/04
    @filename: swap.c
    @Description:Program to swap value of two variables using pointer.
  */

#include <stdio.h>
int main()
{
  int num1, num2;
  int *p1, *p2, *temp;
  printf("Enter value of num1 and num2:\n");
  scanf("%d%d", &num1, &num2);
  p1 = &num1;
  p2 = &num2;
  printf("The value before swapping is %d,%d\n", num1, num2);
  *temp = *p1;
  *p1 = *p2;
  *p2 = *temp;
  printf("The value before swapping is %d,%d\n", num1, num2);
  return 0;
}