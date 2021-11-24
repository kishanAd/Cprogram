/*@Filename:display.c
@Author:Kishan Adhikari
@Created Date:2021/07/20
Get input of two float numbers in to variables x & y, receive the mathematical operator (+,
-, *, /) using unformatted I/O into the variable and perform operations on x & y and
display the result.
*/

#include <stdio.h>
int main()
{
  char x, y;
  printf("Enter value of x and y:\n");
  x = getchar();
  y = getchar();
  char add = x + y;
  char sub = x - y;
  char div = x / y;
  char mult = x * y;
  puts(add);
  puts(sub);
  puts(div);
  puts(mult);
  return 0;
}
