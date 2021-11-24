#include <stdio.h>
int main()
{
  int mat1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, res[3][3] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  int i, j;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", mat1[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {

      res[i][j] = mat1[j][i];
    }
  }
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", res[i][j]);
    }
    printf("\n");
  }
}