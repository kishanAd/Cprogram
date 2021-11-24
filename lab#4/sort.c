/* @Author: Kishan Adhikari
   @Filename:sort.c
   @Created Date: 2078/05/07
   @Description: Write a program to sort 5 string words stored in an array of pointers.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void sort(char *x[]);
int main()
{
  char *arr[5], new[5];
  int check;

  printf("Enter string:\n");
  for (int i = 0; i < 5; i++)
  {
    arr[i] = (char *)malloc(100 * sizeof(char));
    scanf("%s", arr[i]);
  }
  for (int i = 0; i < 4; i++)
  {
    for (int j = i + 1; j < 5; j++)
    {
      check = strcmp(arr[i], arr[j]);
      if (check > 0)
      {
        strcpy(new, arr[j]);
        strcpy(arr[j], arr[i]);
        strcpy(arr[i], new);
      }
    }
  }
  printf("Sorted string is:\n");
  for (int i = 0; i < 5; i++)
  {
    printf("%s\n", arr[i]);
  }
  return 0;
}
