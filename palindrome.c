/*
  @Filename : palindrome.c
  @Author : Kishan Adhikari
  
  
  Write a program to check whether a number is palindrome or not using function
  with argument and no return value. (121, 12321, 444 are e.g. of palindrome
  numbers)

  An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.
  so using this logic (reversed integer = given integer) we can check whether a number is palindrome or not.

  To reverse an integer:
  set reverse variable to zero
  let 1331 be an integer;
  remainder=num%10
  reverse=(reverse*10)+remainder
  num=num/10
  do above operation until number become zero


  
  iteration   number  remainder(by 10)       reverse       num/10
    first       1331     1                  (0*10)+1=1        133
    second      133      3                  (1*10)+3=13       13
    third       13       3                  (13*10)+3=133     1
    fourth      1        1                  (133*10)+1=1331   0

 since num is zero loop breaks.

 as (reverse==1331) it is palindrome

 
  
  */
#include <stdio.h>
void checkpalindrome(int num); //function prototype

int main()
{
  int a;
  printf("Enter any number.\n");
  scanf("%d", &a);
  printf("num=%d\n", a);
  checkpalindrome(a);
  return 0;
}

void checkpalindrome(int num)
{
  int reversed = 0, remainder;
  int temp = num;

  while (num > 0)
  {
    remainder = num % 10;
    reversed = remainder + reversed * 10;
    num /= 10;
  }

  if (temp == reversed)
  {
    printf("%d is a palindrome.\n", temp);
  }
  else
  {
    printf("%d is not a palindrome number.\n", temp);
  }
}
