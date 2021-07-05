/*
  @Filename: centigradetofahrenheit.c
  @Author : Kishan Adhikari
  @Created Date : 2021/07/05


  Write a program to convert temperature in degree Centigrade to degree Fahrenheit
  using function with argument and return value. 
*/

#include <stdio.h>
float convert(float centigrade); //function prototype (the function expects float value both as return and parameter value).
int main()
{
  float value, res;
  printf("Enter the temperature in centigrade:\n");
  scanf("%f", &value);
  printf("The given temperature %.2f in fahrenheit is: %.2f\n", value, convert(value)); //call the function inside printf function
}
float convert(float centigrade) //convert function
{

  float result;
  result = (9.0 / 5.0) * (centigrade) + 32;
  return (result);
}