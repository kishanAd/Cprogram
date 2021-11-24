/*  
    @Author: Kishan Adhikari
    @Created Date: 2078/05/05
    @filename: float.c
    @Description:program to display largest and smallest element of an array defined in Q.No. 1
  */
#include <stdio.h>
int main()
{
  int i = 0;
  float num[10], large, small;
  printf("Enter value to store in array:\n");
  for (i = 0; i < 10; i++)
  {
    printf("num[%d]:", i);
    scanf("%f", &num[i]);
  }
  large = num[0];
  small = num[0];
  for (i = 0; i < 10; i++)
  {
    if (num[i] > large)
    {
      large = num[i];
    }
    if (num[i] < small)
    {
      small = num[i];
    }
  }
  printf("Largest Value= %.2f\n", large);
  printf("Smallest Value= %.2f\n", small);

  return 0;
}