/* 
  @Author : Kishan Adhikari
  @Filename: areaofcircle.c
  @CreatedDate: 2021/07/09

  Write a program to calculate simple interest for a given P=4000, T=2, R=5.5. (I =
  P*T*R/100)  

*/

#include <stdio.h>
int main()
{
  int P, T;
  float R, I;
  P = 4000;
  T = 2;
  R = 5.5;
  I = (P * T * R) / 100.0;
  printf("Simple Interest is : %.2f\n", I);
  return 0;
}
