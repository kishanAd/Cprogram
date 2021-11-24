/*  
    @Author: Kishan Adhikari
    @Created Date: 2078/05/04
    @filename: avgsum.c
    @Description:program to initialize a one dimensional array of size 8 and display
     the sum and average of array elements
  */
#include <stdio.h>
int main()
{
  int num[8], sum = 0;
  float average = 0;
  //adding data to array
  printf("Enter value to store in array:\n");
  for (int i = 0; i < 8; i++)
  {
    printf("num[%d]: ", i);
    scanf("%d", num + i);
  }
  for (int i = 0; i < 8; i++)
  {
    sum += num[i];
  }
  average = sum / 8.0;
  printf("The sum and average of element in array is: %d %.3f\n", sum, average);
  return 0;
}