/* 
  @Author : Kishan Adhikari
  @Filename: operator.c
  @CreatedDate: 2021/07/12

  Print the value of y for given x=2 & z=4and analyze the output.
  a. y = x++ + ++x; 
  b. y=++x + ++x;
  c. y= ++x + ++x + ++x;
  d. y = x>z;
  e. y= x>z? x: z;
  f. y = x&z;
  g. y= x>>2 + z<<1

*/
#include <stdio.h>
int main()
{
  int x;
  int z;
  int y;
  x = 2, z = 4;
  //  x=2 x then becomes (3)+ x becomes 4,x is assigned to 4 ==> y+2+4                                                       //Assigning values
  y = x++ + ++x; //*x++ is postfix and ++x is prefix operator "++x” -> increments “x” then uses value “x” “x++” -> uses value “x” then increments “x”*/
  printf("The value of y after operation( y=x++ + ++x) is %d.\n", y);
  printf("The value of x =%d\n\n", x); //x=4

  //  5 (5)+ 6(6) : 6+6
  y = ++x + ++x;
  printf("The value of y after operation(y = ++x + ++x) is %d.\n", y);
  printf("The value of x =%d\n\n", x); //x=6

  //y=(7) (7)+(8)(8)+(9)(9)
  y = ++x + ++x + ++x;
  printf("The value of y after operation(y = ++x + ++x + ++x) is %d.\n", y);
  printf("The value of x =%d\n\n", x); //x=9

  y = x > z; //greater than (if true gives 1 otherwise gives 0)
  // printf("The value of x =%d\n", x);
  printf("The value of y after operation(x > z) is %d.\n\n", y);

  printf("The value of x =%d\n", x);
  y = x > z ? x : z; //if x is greater then x then x else z
  printf("The value of y after operation(y =  = x > z ? x : z) is %d.\n\n", y);

  y = x & z; //bitwise and operation
  printf("The value of y after operation( y = x & z) is %d.\n\n", y);

  y = x >> 2 + z << 1; //left shift and right shift
  printf("The value of y after operation(y = x >> 2 + z << 1) is %d.\n", y);
  return 0;
}
