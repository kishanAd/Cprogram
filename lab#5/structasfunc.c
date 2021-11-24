/* @Author: Kishan Adhikari
  @Filename: structandfunc.c
  @Created Date: 2078/05/10
  @Description:Write a function which accepts structure as argument and returns structure to the calling
  program.
*/
#include <stdio.h>
struct employee
{
  char Name[40];
  char location[40];
  int age;
  int salary;
  char position[40];
};
void read_display(struct employee emp)
{
  printf("Enter information of employee:\n");
  printf("Enter Employee Name:\n");
  scanf(" %[^\n]s", emp.Name);
  printf("Enter Employee location:\n");
  scanf(" %[^\n]s", emp.location);
  printf("Enter Employee position:\n");
  scanf(" %[^\n]s", emp.position);
  printf("Enter Employee age:\n");
  scanf("%d", &emp.age);
  printf("Enter Employee salary:\n");
  scanf("%d", &emp.salary);
  printf("The detail of Employee is :\n");
  printf("Name: %s\tLocation: %s\tPosition: %s\nage: %d\tSalary: %d\n", emp.Name, emp.location, emp.position, emp.age, emp.salary);
}

int main()
{
  struct employee emp;
  read_display(emp);

  return 0;
}