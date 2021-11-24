/*  
    @Author: Kishan Adhikari
    @Created Date: 2078/05/06
    @filename: multiplymat.c
    @Description:program to multiply two 3*3 matrices
  */
#include <stdio.h>
int main()
{
  int i, j, k;
  int mat1[3][3];
  int mat2[3][3], result[3][3], sum = 0;
  printf("Enter element in matrices:\n");

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("mat1[%d][%d]: ", i, j);
      scanf("%d", &mat1[i][j]);
    }
  }
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("mat2[%d][%d]: ", i, j);
      scanf("%d", &mat2[i][j]);
    }
  }
  printf("Matrix A is:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", mat1[i][j]);
    }
    printf("\n");
  }
  printf("Matrix B is:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", mat2[i][j]);
    }
    printf("\n");
  }

  //multiplying matrices
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      sum = 0;
      for (k = 0; k < 3; k++)
      {
        sum += mat1[i][k] * mat2[k][j];
        result[i][j] = sum;
      }
    }
  }
  printf("Result matrix is:\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", result[i][j]);
    }
    printf("\n");
  }
  return 0;
}