/*  
    @Author: Kishan Adhikari
    @Created Date: 2078/05/05
    @filename: matrix.c
    @Description:program to read two matrices of order 3 * 2,
     add them and display the resultant matrix in matrix form.

  */

#include <stdio.h>
void add_matrix(int mat1[3][2], int mat2[3][2]);
int main()
{
  int mat1[3][2], mat2[3][2], i, j;
  printf("Enter element in matrix A:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("matB[%d][%d]: ", i, j);
      scanf("%d", &mat1[i][j]);
    }
  }
  printf("Enter element in matrix B:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("matA[%d][%d]: ", i, j);
      scanf("%d", &mat2[i][j]);
    }
  }
  add_matrix(mat1, mat2);
}
void add_matrix(int mat1[3][2], int mat2[3][2])
{
  int i, j, add[3][2];
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      add[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
  printf("The sum of two matrix is:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("%d\t", add[i][j]);
    }
    printf("\n");
  }
}