/* c program to calculate sum and differences of diagonal of matrix
*/

#include <stdio.h>
int main()
{
  int row, col, i, j;

  int main_diag = 0;
  int sub_diag = 0;
  printf("Enter number of rows and columns;\n");
  scanf("%d %d", &row, &col);
  int mat[row][col];
  printf("Enter value :\n");
  /*getting input from user */
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {

      scanf("%d", &mat[i][j]);
    }
  }
  /*printing matrices*/
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < col; j++)
    {

      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }
  /*sum on main diagonal a[0][0]+a[1][1]+a[2][2]+....*/
  for (int a = 0; a < row; a++)
  {

    main_diag += mat[a][a];
  }
  printf("main_diagnol=%d\n", main_diag);

  int d = row - 1; //sub diagonal last element
  for (int b = 0; b < row; b++)
  {

    sub_diag += mat[d][b];
    d -= 1;
  }
  printf("sub_diag=%d\n", sub_diag);
  printf("diag_differences=%d\n", main_diag - sub_diag); //differences
  printf("diag_sum=%d\n", main_diag + sub_diag);         //sum

  return 0;
}
