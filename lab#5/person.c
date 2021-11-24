/* @Author: Kishan Adhikari
  @Filename: person.c
  @Created Date: 2078/05/20
  @Description:Write name, age and height of a person into a data file “person.txt” and read it (use fprintf()
  and fscanf() function).
*/
#include <stdio.h>
#include <stdlib.h>
struct person
{
  char name[50];
  int age;
  float height;
} per;
int main()
{
  FILE *file;
  file = fopen("person.txt", "w");
  if (file == NULL)
  {
    printf("Error opening File");
    exit(0);
  }
  printf("Enter nameof person: ");
  scanf(" %[^\n]s", per.name);
  printf("Enter age of person: ");
  scanf("%d", &per.age);
  printf("Enter height in feet: ");
  scanf("%f", &per.height);
  fprintf("%s %d% %f", per.name, per.age, per.height);
  fclose(file);
  FILE *ptr;
  fscanf(file, "%s %d %f", &per.name, &per.age, per.height);

  printf("Name: %s\nAge:%d\nHeight: %.2f\n", per.name, per.age, per.height);

  return 0;
}