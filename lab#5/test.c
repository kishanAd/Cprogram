#include <stdio.h>
#include <string.h>
struct student
{
  char firstName[50];
  int roll;
  float marks;
} s[5];

int main()
{
  int i, value;
  printf("Enter information of students:\n");
  char name[30];

  // storing information
  for (i = 0; i < 5; ++i)
  {
    s[i].roll = i + 1;
    printf("\nFor roll number%d,\n", s[i].roll);
    printf("Enter first name: ");
    scanf("%s", s[i].firstName);
    printf("Enter marks: ");
    scanf("%f", &s[i].marks);
  }
  printf("Displaying Information:\n\n");

  printf("Enter student name:\n");
  scanf("%s", name);
  // displaying information
  for (i = 0; i < 5; ++i)
  {
    value = strcmp(name, s[i].firstName);
    if (value == 0)
    {

      printf("\nRoll number: %d\n", i + 1);
      printf("First name: ");
      puts(s[i].firstName);
      printf("Marks: %.1f", s[i].marks);
      printf("\n");
      break;
    }
  }
  return 0;
}