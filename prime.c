/* Prime number are those which are divisible only by two number (that number itself and 1)
  to check prime we check whether the remiander of number (N) is divisible by all number less than N-1 upto 1 is zero or not
  let us take an example : 
  number  number-1 remainder
  5         4       1
  5         3       2
  5         2       3
  since the remainder is not zero in any case ;
  so 5 is a prime number.
  Time complexity is O(N-1) (since it check all number form 2 to N-1)


  another approach to solve the problem
  we didnt have to check all the way up to N-1
  since N has no factor which is greater than half of itself.
  we can loop through 2 to N/2
  Time complexity is O(N/2)

  Better way to solve this problem
  let us take a number 72;
  its factor in pair are ;
  factor1 factor2   pair
  1       72          {1,72}
  2       36          {2,36}
  3       24          {3,24}
  4       18          {4,18}
  6       12          {6,12}
  8       9           {8,9}
  9       8           {9,8}
  12      6           {12,6}
  18      4           {18,4}
  24      3           {24,3}
  36      2           {36,2}
  72      1           {72,1}

  we observe an interesting pattern that after square root of 72  the factor start to repeat itself 
  so instead of checking upto N/2 we can now check upto sqrt(N) which is far more less time consuming.
  Time complexity is O(sqrt(N))


         

*/
#include <stdio.h>
#include <math.h>
void checkprime(int num); // void tells compiler that the function will return no data type

int main()
{
  int a, result;
  printf("Enter any number: \n");
  scanf("%d", &a);
  checkprime(a);
  checkprime(99999989);
  
}

void checkprime(int num)
{
  int temp = 0;
  int k = ceil(sqrt(num));
  for (int i = 2; i <= k; i++)
  {
    if (num % i == 0)
    {
      temp = 1;
    }
  }
  (temp == 1) ? printf("%d is a composite number.\n", num) : printf("%d is a prime number.\n", num);
}
