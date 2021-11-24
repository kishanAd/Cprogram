#include <stdio.h>
#include "permcomb.h"

void main()
{
  int n, r;
  printf("Enter value of n and r:\n");
  scanf("%d%d", &n, &r);
  printf("The value of %d permutation %d is: %d", n, r, permut(n, r));
  printf("\nThe value of %d combination %d is: %d\n", n, r, combt(n, r));
}
