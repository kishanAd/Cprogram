#include <stdio.h>

void main()
{
  int i, n;
  float degree, sum = 1, t = 1;

  printf(" Enter the value for degree : ");
  scanf("%f", &degree);

  printf(" Enter the value for n : ");
  scanf("%d", &n);

  degree = 3.14 * degree / 180;

  /* Loop to calculate the value of Cosine */
  for (i = 1; i <= n; i++)
  {
    t = t * (-1) * degree * degree / (2 * i * (2 * i - 1));
    sum += t;
  }

  printf(" The value of Cos(%f) is : %.4f", degree, sum);
}