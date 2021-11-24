/*  
    @Author: Kishan Adhikari
    @Created Date: 2078/05/06
    @filename: biggest.c
    @Description:Program to find biggest among three numbers using pointer.
  */
#include <stdio.h>
int main()
{
  int n1, n2, n3;
  int *p1, *p2, *p3;

  printf("Enter three numbers:\n");
  scanf("%d%d%d", &n1, &n2, &n3);
  p1 = &n1, p2 = &n2, p3 = &n3;
  if (*p1 > *p2 && *p1 > *p3)
  {
    printf("%d is largest\n", *p1);
  }
  else if (*p2 > *p1 && *p2 > *p3)
  {
    printf("%d is largest\n", *p2);
  }
  else

  {
    printf("%d is largest\n", *p3);
  }
  return 0;
}