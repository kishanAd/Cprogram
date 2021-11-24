/*
  @Author : Kishan Adhikari
  @File name: GCDandLCM.c
  @Created Date:2021/04/31
  @Description: program to find GCD (greatest common divisor or HCF) and LCM (least common
  multiple) of two numbers.

  GCD (Greatest common divisor) of two number is largest number 
  which divides boths
  gcd(120,250) :
  to calculate divisor we find all the divisor of small number (120)
  divide number (120) by  2 to 10
  {1,120} {2,60} {3,40} {4,30} {5,24} {6,20} {8,15} {10,12} 
  and we move from bigger number to check if it evenly divides 250 or not
  in our case 120 doesnt,60 doesnt,40 doesnt,30 doesnt,24 doesnt,20 doesnt,15 doesnt,12doesnt ,10 does
  it takes 19 steps to calculate
  gcd(120,250)=10
  To calculate GCD we use Euclidian Algorithm:
  GCD(120,250)
  divide 250 by 120 and save remainder
  250%120=10
  divide 120 by remainder(10)
  120%10=0 
  since remainder is zero ,gcd is 10

  */
#include <stdio.h>

int GCD(int num1, int num2);
int lcm(int a, int b);

int main()
{
  int a, b;
  printf("Enter Value of a and b: \n");
  scanf("%d%d", &a, &b);

  printf("The GCD of %d and %d is: %d\n", a, b, GCD(a, b));
  printf("The LCM of %d and %d is : %d\n", a, b, lcm(a, b));
  return 0;
}
int GCD(int num1, int num2)
{
  int dividend = num1 >= num2 ? num1 : num2;
  int divisor = num1 <= num2 ? num1 : num2;
  while (divisor != 0)
  {
    int remainder = dividend % divisor;
    dividend = divisor;
    divisor = remainder;
  }
  return dividend;
}
int lcm(int a, int b)
{
  int LCM = a * b / (GCD(a, b));
  return LCM;
}