#include <stdio.h>
int power(int n, int r)
{
  if (r == 0)
  {
    return 1;
  }
  else
  {
    return n * power(n, r - 1);
  }
}

int main()
{
  int a, b;
  printf("Enter number and power to raise:\n");
  scanf("%d%d", &a, &b);
  printf("The value of a to the power b is:%d\n", power(a, b));
  return 0;
}
