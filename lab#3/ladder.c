/*
Author: Kishan Adhikari
Filename:ladder.c
Created Date: 2078/04/28
Description:
program to print pattern:
*
**
***
****
*****

Nested loop is used for such task (pattern with row and column)
Inner loop print how many * to print on single line
Outer loop gives how many such lines are needed.

To print given pattern 


      i=1 * j=1(one star)
      i=2 ** j=2(2 star)
      i=3 *** j=3(3 star)
      i=4 **** j=4(4 star)
      i=5 ***** j=5(5 star)
first inner loop completes and moves to outer loop.
there is next life after i=j so we moves to next line after completing inner loop

                i<5,j<=i
i       j       condition       result                printstatement
0       0       0<5,0<=0          true                      *
0       1       0<5,1<=0          false(loop breaks)        \n
1       0       1<5,0<=1          true                      *
1       1       1<5,1<=1          true                      **
1       2       1<5,2<=1          false(loop breaks)        \n

*/



#include <stdio.h>

int main()
{
  int i, j;
  for (i = 0; i < 5; i++)
  {
    for (j = 0; j <= i; j++)
    {

      printf("*");
    }
    printf("\n");
  }
}
