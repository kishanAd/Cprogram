/* 
  @Author : Kishan Adhikari
  @Filename: multiply.c
  @CreatedDate: 2021/07/09

  Write a program to multiply two numbers (10&8)

*/

#include <stdio.h> //header file (standard input output)
int main()         //main function
{
  int num1, num2, result;                                          //Declare variable
  num1 = 10;                                                       //set variable num1 to 10
  num2 = 8;                                                        //set variable num2 to 8
  result = num1 * num2;                                            //multiply num1 and num2 and store it to result
  printf("The Product of %d and %d is: %d\n", num1, num2, result); //print the result
  return 0;                                                        //return statement of int type
}
