/*
  @Author : Kishan Adhikari
  @File name: sumofeven.c
  @Created Date:2021/04/30
  @Description: program to print sum of even number 
  between two input numbers
*/

#include <stdio.h>
int main()
{
  int num1, num2, sum = 0;
  printf("Enter two numbers:\n");
  scanf("%d%d", &num1, &num2);
  int temp1 = num1 + 1; //incrementing num1 by 1 as num1 doesn't lie between(num1,num2)
  if (num1 < num2)
  {
    for (temp1; temp1 < num2; temp1++)
    {
      if (temp1 % 2 == 0)
      {
        sum += temp1;
      }
    }
    printf("Sum=%d\n", sum);
  }

  else
  {
    int temp2 = num2 + 1; //incrementing num2 by 1 as num2 doesn't lie between(num2,num1)
    for (temp2; temp2 < num1; temp2++)
    {
      if (temp2 % 2 == 0)
      {
        sum += temp2;
      }
    }
    printf("Sum=%d\n", sum);
  }
  return 0;
}
