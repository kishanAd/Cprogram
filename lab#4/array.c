/* @Author: Kishan Adhikari
    @Created Date: 2078/05/04
    @filename: array.c
    @Description:program to find separately the sum of the positive and negative integer elements
    of an array of size 10. Pass the positive and negative elements to separate functions e.g.:
    sum_positive(int*), sum_negative(int*) to carry out its sum. Also pass this array to a
    function called sort_array(int[]) and display the array elements into ascending order using
    pointer
  */
#include <stdio.h>
#include <string.h>
void sum_positive(int *arr, int n);
void sum_negative(int *arr, int n);
void sort_array(int *arr, int n);

int main()
{
  int *a;
  int i, n;
  printf("Enter element to enter in array:\n");
  printf("Enter how many element you want to enter: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("element-%d : ", i + 1);
    scanf("%d", a + i);
  }
  sum_positive(a, n);
  sum_negative(a, n);
  sort_array(a, n);
  printf("sorted Array is:");
  for (i = 0; i < n; i++)
  {
    printf("%d ", *(a + i));
  }
  return 0;
}
void sum_positive(int *arr, int n)
{
  int i, sum = 0;
  for (i = 0; i < n; i++)
  {
    if (*(arr + i) > 0)
    {
      sum += *(arr + i);
    }
  }
  printf("Sum of positive number in array is: %d\n", sum);
}
void sum_negative(int *arr, int n)
{
  int i, sum = 0;
  for (i = 0; i < 10; i++)
  {
    if (*(arr + i) < 0)
    {
      sum += *(arr + i);
    }
  }
  printf("Sum of negative number in array is: %d\n", sum);
}
void sort_array(int *arr, int n)
{
  int i, j, temp;
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (*(arr + j) < *(arr + i))
      {
        temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
      }
    }
  }
}