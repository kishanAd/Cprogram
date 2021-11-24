/*@Filename:oddeven.c
@Author:Kishan Adhikari
@Created Date:2021/07/20
  Write a program to find the largest and smallest among three entered numbers and also
  display whether the identified largest/smallest number is even or odd.
*/

#include <stdio.h>

int main()
{
  int a, b, c, temp, temp2;
  printf("Enter three number:\n");
  scanf("%d %d %d", &a, &b, &c);
  if (a > b && a > c)
  {
    printf("%d is greatest number\n", a);

    temp = a;
  }
  else if (b > c && b > a)
  {
    printf("%d is greatest number\n", b);

    temp = b;
  }
  else
  {
    printf("%d is greatest number.\n", c);

    temp = c;
  }
  (temp % 2 == 0) ? printf("%d is even\n", temp) : printf("%d is odd\n", temp);
  if (a < b && a < c)
  {
    printf("%d is smallest number\n", a);

    temp2 = a;
  }
  else if (b < c && b < a)
  {
    printf("%d is smllest number\n", b);

    temp2 = b;
  }
  else
  {
    printf("%d is smallest number.\n", c);

    temp2 = c;
  }

  (temp2 % 2 == 0) ? printf("%d is even\n", temp2) : printf("%d is odd\n", temp2);
  return 0;
}