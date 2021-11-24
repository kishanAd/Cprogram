#include <stdio.h>
int main()
{
  int x = 9;
  int z = 4;
  int y = x >> 2 + z << 1; //left shift and right shift
  printf("The value of y after operation(y = x >> 2 + z << 1) is %d.\n", x >> 2 + z << 2);
  return 0;
}
