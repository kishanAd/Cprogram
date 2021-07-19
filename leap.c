/*
  Write a program to check whether the entered year is leap year or not (a year is leap if it is
  divisible by 4 and divisible by 100 or 400.)

  An extra day is added to the calendar almost every four years as February 29, and the day is called a leap day.
  It corrects the calendar for the fact that our planet takes approximately 365.25 days to orbit the sun.
  A leap year contains a leap day.

In the Gregorian calendar, three conditions are used to identify leap years:

  The year can be evenly divided by 4, is a leap year, unless:
  The year can be evenly divided by 100, it is NOT a leap year, unless:
  The year is also evenly divisible by 400. Then it is a leap year.
This means that in the Gregorian calendar, the years 2000 and 2400 are leap years, while 1800, 1900, 2100, 2200, 2300 and 2500 are NOT leap years.

*/

#include <stdio.h>
int main()
{
  int year;
  printf("Enter year: \n");
  scanf("%d", &year);
  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) // year is divided by 4 but year is not divide by 100 or year is divided by 100
  {
    printf("%d is a leap year.\n", year);
  }
  else
  {
    printf("%d is not a leap year.\n", year);
  }
  return 0;
}