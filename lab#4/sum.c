/*  
    @Author: Kishan Adhikari
    @Created Date: 2078/05/06
    @filename:sum.c
    @Description:Program to find the sum of all the elements of an array using pointers.
  */

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  printf("Enter how many element do you want to store:\n");
  scanf("%d", &n);
  int *num = (int *)malloc(n * sizeof(int));
  int i, sum = 0;
  printf("Enter element to store\n");
  for (i = 0; i < n; i++)
  {
    printf("num[%d]: ", i);
    scanf("%d", num + i);

    sum += *(num + i);
  }
  printf("Sum=%d\n", sum);
  free(num);
  return 0;
}