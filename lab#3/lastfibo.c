/*
  @Author : Kishan Adhikari
  @File name: lastfibo.c
  @Created Date:2021/04/30
  @Description: program to display Fibonacci series of last term up to 300.
*/
#include <stdio.h>
int main()
{

  int end = 300, i, c, last;
  int a = 0;
  int b = 1;

  for (i = 0; i < 25; i++)
  {
    c = a + b;
    a = b;
    b = c;
    if (c >= end)
    {
      last = a;

      break;
    }
  }
  printf("The last fibonacci term less than 300 is :%d\n", last);
}