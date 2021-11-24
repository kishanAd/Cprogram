/* @Author: Kishan Adhikari
    @Created Date: 2078/05/04
    @filename: sortarray.c
    @Description:program to find separately the sum of the positive and negative integer elements of an array of size 10. Pass this array to a function called sort_array(int[]) 
    and display the array elements into ascending order.
  */
#include <stdio.h>
void sort_array(int arr[10]);
int main()
{
  int i, positive_sum = 0, negative_sum = 0;
  int arr[10];

  printf("Enter value to store in array:\n");
  for (i = 0; i < 10; i++)
  {
    printf("arr[%d]: ", i);
    scanf("%d", arr + i);
    if (arr[i] > 0)
    {
      positive_sum += arr[i];
    }
    if (arr[i] < 0)
    {
      negative_sum += arr[i];
    }
  }
  printf("positive sum=%d\n", positive_sum);
  printf("Negative sum = %d\n", negative_sum);
  sort_array(arr);
  printf("sorted Array is :\n");
  for (i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
void sort_array(int arr[10])
{
  int i, j, temp = 0;

  for (i = 0; i < 9; i++)
  {

    for (j = 0; j < 9; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
