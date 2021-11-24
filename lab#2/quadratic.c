/*
@Filename:quadratuc.c
@Author:Kishan Adhikari
@Created Date:2021/07/22
Write a program to read the values of coefficients a, b and c of a quadratic equation
ax2+bx+c=0 and find roots of the equation.

roots of quadratic equation=-b (+/-)sqrt(b2-4ac)/(2a)
Discriminant=b2-4ac
when Discriminant >0; real roots exists
when Discriminant<0; imaginary root exists
*/

#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c;
  float root1, root2, real, img;
  printf("Enter value of a,b,c: \n");
  scanf("%d %d %d", &a, &b, &c);
  float Discriminant = (b * b - 4 * a * c);
  if (Discriminant >= 0)
  {
    root1 = (-b + sqrt(Discriminant)) / (2 * a);
    root2 = (-b - sqrt(Discriminant)) / (2 * a);
    printf("Roots of quadratic equation are: %.2f, %.2f \n", root1, root2);
  }
  else
  {
    real = -b / (2 * a);  //real part of root
    img = (sqrt(-Discriminant)) / (2 * a);  //since discriminant is already negative we use - sign to make it positive
    printf("Roots of quadratic equation are:%.2f+%.2fi , %.2f-%.2fi\n", real, img, real, img);
  }

  return 0;
}