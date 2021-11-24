
/*
  @Author : Kishan Adhikari
  @File name: userdefined.c
  @Created Date:2021/04/30
  @Description: program to calculate sum of first 50 natural numbers using recursive function.

  logic:
  sum(50)=50+sum(49)

  formula :n*(n+1)/2 = 50*51/3=25*51=1275

*/

#include <stdio.h>
int recrsum(int num)
{
  if (num == 1)
  {
    return 1;
  }
  return num + recrsum(num - 1);
}
int main()
{

  printf("The sum of natural number upto 50 is:%d\n", recrsum(50));
  return 0;
}