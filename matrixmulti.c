/*
@filename:matrixmulti.c
@created by : Kishan Adhikari
@Date:2021/07/20
Write i program to multiply Matrices of used defined size. 
You should define seperate function to input the elements of matrix,
to print the elements of matrix (inputs and results) and to multiply the matrices. 


*/

#include <stdio.h>
#define ROW 100 //store matrix having dimension upto 100X100
#define COLUMN 100

void getmatrix(int mat_A[ROW][COLUMN], int mat_B[][COLUMN], int row_A, int column_A, int row_B, int column_B);
void printmatrix(int mat_A[ROW][COLUMN], int mat_B[][COLUMN], int row_A, int column_A, int row_B, int column_B);
void multiplymatrix(int mat_A[ROW][COLUMN], int mat_B[][COLUMN], int resultmat[][COLUMN], int row_A, int column_A, int row_B, int column_B);
void displayresult(int resultmat[ROW][COLUMN], int row_A, int column_B);

int main()
{
  int mat_A[ROW][COLUMN], mat_B[ROW][COLUMN], resultmat[ROW][COLUMN], row_A, column_A, row_B, column_B;

  printf("Enter number of rows and columns for matrix A:\n");
  scanf("%d%d", &row_A, &column_A);
  printf("Enter number of rows and columns for matrix B:\n");
  scanf("%d%d", &row_B, &column_B);
  if (column_A == row_B)
  {
    getmatrix(mat_A, mat_B, row_A, column_A, row_B, column_B);
    printmatrix(mat_A, mat_B, row_A, column_A, row_B, column_B);

    multiplymatrix(mat_A, mat_B, resultmat, row_A, column_A, row_B, column_B);
    displayresult(resultmat, row_A, column_B);
  }
  else
  {
    printf("Matrix cannot be multiplied\n");
  }
  return 0;
}

void getmatrix(int mat_A[ROW][COLUMN], int mat_B[ROW][COLUMN], int row_A, int column_A, int row_B, int column_B)
{
  int i, j;

  printf("Enter Element of matrix A;\n");
  for (i = 0; i < row_A; i++)
  {
    for (j = 0; j < column_A; j++)
    {
      scanf("%d", &mat_A[i][j]); //giving input to matrix A
    }
  }

  printf("Enter Element of matrix B;\n");
  for (i = 0; i < row_B; i++)
  {
    for (j = 0; j < column_B; j++)
    {
      scanf("%d", &mat_B[i][j]); //giving input to matrix B
    }
  }
}

void printmatrix(int mat_A[ROW][COLUMN], int mat_B[ROW][COLUMN], int row_A, int column_A, int row_B, int column_B) //function to display matrix A and B
{

  int i, j;
  printf("Matrix A=\n");
  for (i = 0; i < row_A; i++)
  {
    for (j = 0; j < column_A; j++)
    {
      printf("%d\t", mat_A[i][j]);
    }
    printf("\n");
  }
  printf("Matrix B=\n");
  for (i = 0; i < row_B; i++)

  {
    for (j = 0; j < column_B; j++)
    {
      printf("%d\t", mat_B[i][j]);
    }
    printf("\n");
  }
}

void multiplymatrix(int mat_A[ROW][COLUMN], int mat_B[ROW][COLUMN], int resultmat[ROW][COLUMN], int row_A, int column_A, int row_B, int column_B) //function to print matrix a and b and store in c
{

  int i, j, k;

  /*matrix multiplication*/
  for (i = 0; i < row_A; i++)
  {
    for (j = 0; j < column_B; j++)
    {
      int sum = 0; //declare sum to zero
      for (k = 0; k < column_A; k++)
      {
        sum += mat_A[i][k] * mat_B[k][j]; //sum+=A[0][0]*B[0][0] sum+=
      }
      resultmat[i][j] = sum;
    }
  }
}

void displayresult(int resultmat[ROW][COLUMN], int row_A, int column_B)
{
  int i, j;

  printf("resultmat=\n");
  for (i = 0; i < row_A; i++)
  {
    for (j = 0; j < column_B; j++)
    {
      printf("%d\t", resultmat[i][j]);
    }
    printf("\n");
  }
}
