/* 
  @Author : Kishan Adhikari
  @Filename: areaofcircle.c
  @CreatedDate: 2021/07/09

  Write a program to calculate area of a circle having its radius (r=5).

*/

#include <stdio.h> //header file (standard input output)
#define pi 3.14    //Preprocesser directive (pi is declared and save before compilation)

int main() //main function
{
  int r = 5;                                           //assign r to 5
  float area = pi * r * r;                             //calculate area and store in float
  printf("The area of given circle is %.2f.\n", area); //print area upto two decimal place
  return 0;                                            //exit status
}