
#include <math.h>
#include <stdio.h>

void checkarmstrong(int num);

int main()
{
  int a;
  printf("Enter any any number:\n");
  scanf("%d", &a);
  checkarmstrong(a);
  return 0;
}

void checkarmstrong(int num)
{
  int sum = 0;
  int temp = num;
  int power = (int)log10(num) + 1;
  while (num > 0)
  {
    sum += pow(num % 10, power);
    num = num / 10;
  }
  (sum == temp) ? printf("%d is an armstrong number.\n", temp) : printf("%d is not an armstrong number\n", temp);
}
