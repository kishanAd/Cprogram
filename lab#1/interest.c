/* 
  @Author : Kishan Adhikari
  @Filename: areaofcircle.c
  @CreatedDate: 2021/07/09

  Write a program to calculate simple and compound interest.

*/

#include <stdio.h> //header file
#include <math.h>  //math.h file to calculate power
int main()
{
  int p, t, n; //initialize variable
  float r, SI, CI;

  printf("Enter principle:\n");
  scanf("%d", &p); //getting input from user

  printf("Enter time:\n");
  scanf("%d", &t);

  printf("Enter number of periods:\n");
  scanf("%d", &n);

  printf("Enter rate:\n");
  scanf("%f", &r);

  SI = (p * t * r) / 100.0; //calculating simple interest
  CI = p * pow((1 + r / (100 * n)), n * t) - p;

  printf("Simple interest is %.2f and compound interest is %.2f.\n", SI, CI);

  return 0;
}