/*/* @Author: Kishan Adhikari
  @Filename: pointerstruct.c
  @Created Date: 2078/05/10
  @Description:Pass the structures defined in Question 1 into a function and read the structure member and
  display the values from the function (use structure pointer).
*/
#include <stdio.h>
struct company
{
  char name[100];
  char address[100];
  long phone;
  int no_of_Employee;
} comp;

void display(struct company *strtoptr)
{
  printf("\tCompany Detail\t\n");
  printf("\tName: %s\n", strtoptr->name);
  printf("\tAddress: %s\n", strtoptr->address);
  printf("\tPhone Number: %ld\n", strtoptr->phone);
  printf("\tNo of employee: %d\n", strtoptr->no_of_Employee);
}
int main()
{
  struct comp;
  printf("Enter company Detail:\n");
  printf("Enter company Name: ");
  scanf(" %[^\n]s", comp.name);
  printf("Enter Company Address: ");
  scanf(" %[^\n]s", comp.address);
  printf("Enter Company Phone Number: ");
  scanf("%ld", &comp.phone);
  printf("Enter Number of Employee in Company: ");
  scanf("%d", &comp.no_of_Employee);
  display(&comp);
  return 0;
}