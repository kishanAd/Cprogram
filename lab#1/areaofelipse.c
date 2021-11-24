/* 
  @Author : Kishan Adhikari
  @Filename: areaofellipse.c
  @CreatedDate: 2021/07/09

  
  Write a program to calculate area of an ellipse having its axes (minor=4cm, major=6cm).
  */
#include <stdio.h> //header file
int main()
{
  int minor, major;
  float area;
  minor = 4;
  major = 6;
  area = 3.14 * minor * major;
  printf("The area of given ellipse is %.2f \n", area); //print the area value upto two decimal point
  return 0;                                             //exit status code
}
