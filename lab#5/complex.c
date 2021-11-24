/*@Author: Kishan Adhikari
  @Filename: complex.c
  @Created Date:2078/05/11
  @Description: Define a structure “complex” (typedef) to read two complex numbers and perform addition, 
  subtraction of these two complex numbers and display the result.
*/

#include <stdio.h>
typedef struct
{
  float real;
  float imaginary;

} complex;
void add(complex c1, complex c2)
{
  complex sum;
  sum.real = c1.real + c2.real;
  sum.imaginary = c1.imaginary + c2.imaginary;
  printf("The sum of complex number (%.1f,%.1f) and (%.1f,%.1f) is: %.1f+%.1fi\n", c1.real, c1.imaginary, c2.real, c2.imaginary, sum.real, sum.imaginary);
}
void subtract(complex c1, complex c2)
{
  complex sub;
  sub.real = c1.real - c2.real;
  sub.imaginary = c1.imaginary - c2.imaginary;
  printf("The sum of complex number (%.1f,%.1f) and (%.1f,%.1f) is: %.1f+%.1fi\n", c1.real, c1.imaginary, c2.real, c2.imaginary, sub.real, sub.imaginary);
}
int main()
{
  complex c1, c2;
  printf("Enter value for first imaginary Number\n");
  printf("Enter real and imaginary parts:\n");
  scanf("%f%f", &c1.real, &c1.imaginary);

  printf("Enter value for Second imaginary Number\n");
  printf("Enter real and imaginary parts:\n");
  scanf("%f%f", &c2.real, &c2.imaginary);
  add(c1, c2);
  subtract(c1, c2);
  return 0;
}
