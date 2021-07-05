#include <stdio.h>
int main()
{
  int num;
  int sum = 0; //initialize sum to zero
  scanf("%d", &num);  //take input from user
  while (num > 0) //loop to check whether num is greater than 0 or not
  {
    sum += num % 10;  //give remainder (1234%10=4 and update in each iteration) and adds to it (123%10=3)
    num = num / 10; //divide num by 10 in each iteration (1234/10=123) (123/10=12) 
    }
  printf("%d", sum);
}
