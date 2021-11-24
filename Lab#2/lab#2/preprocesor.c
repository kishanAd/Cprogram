/*

  @Filename:preprocessor.c
  @Author:Kishan Adhikari
  @Created Date:2021/07/20
  Define the math operator ‘+’ as PLUS, ‘-‘ as MINUS, ‘*’ as MULT & ‘/’ as DIVIDE using
  preprocessor directives and do the operations over variables (x, y) defined on above
  question like z=x PLUS y.

*/
#include <stdio.h>

//Preprocessor directive (it is stored before program compilation)
#define PLUS +
#define MINUS -
#define MULTIPLY *
#define DIVIDE /

int main()
{
  int x, y, z;
  printf("Enter value of x and y:\n");
  scanf("%d %d", &x, &y);
  z = x PLUS y; //PLUS is replaced by +
  printf("Value of z after PLUS is : %d\n", z);

  z = x MINUS y; //MINUS is replaced by -
  printf("Value of z after MINUS is : %d\n", z);

  z = x MULTIPLY y; //MULTIPLY is replaced by *
  printf("Value of z after MULTIPLY is : %d\n", z);

  z = x DIVIDE y; //Divide is replaced by /
  printf("Value of z after DIVIDE is : %d\n", z);

  return 0;
}