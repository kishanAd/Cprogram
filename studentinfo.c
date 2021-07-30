/*
  @filename:prices.c
  @author:Kishan Adhikari
  @date:2021/07/27
Write a program to store the information(name and age) of 10 students using pointer of structure array.
*/
#include <stdio.h>
typedef struct student
{
  char name[20];
  int age;
};

int main()
{
  int i;
  struct student std[10], *ptr; //*ptr is pointer to struct
  ptr = std;                    //ptr points to of struct std

  printf("Enter student detail:\n");
  for (i = 1; i <= 10; i++)
  {
    printf("Enter name and age for student No %d:\n", i);
    scanf("%s%d", &(ptr + i)->name, &(ptr + i)->age);
  }

  printf("\nname\t\t\tage\n");
  for (i = 1; i <= 10; i++)
  {
    printf("%s\t\t\t%d\n", (ptr + i)->name, (ptr + i)->age); //-> is use to dereference pointer to struct
  }
  return 0;
}
