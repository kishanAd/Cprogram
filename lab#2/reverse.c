/* 
@Filename:reverse.c
@Author:Kishan Adhikari
@Created Date:2021/07/20

To reverse an integer:
  set reverse variable to zero
  let 1572 be an integer;
  remainder=num%10
  reverse=(reverse*10)+remainder
  num=num/10
  do above operation until number become zero


  
  iteration   number  remainder(by 10)       reverse       num/10
    first       1572     2                  (0*10)+2=2       157
    second      157      7                  (2*10)+7=27       15
    third       15       5                  (27*10)+5=275      1
    fourth      1        1                  (275*10)+1=2751    0

 since num is zero loop breaks.

*/
#include <stdio.h>
int main()
{
  int num, remainder = 0, reverse = 0;
  printf("Please enter number of two or more digits:\n");
  scanf("%d", &num);
  while (num != 0)
  {
    remainder = num % 10;
    reverse = remainder + reverse * 10;
    num /= 10;
  }
  printf("The reverse of number is:%d\n", reverse);
  return 0;
}