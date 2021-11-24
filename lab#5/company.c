/* @Author: Kishan Adhikari
  @Filename: company.c
  @Created Date: 2078/05/10
  @Description:Create a structure named company which has name, address, phone and noOfEmployee as member variables. Read name of company, its address, phone and noOfEmployee.
   Finally display these members’ value
*/

#include <stdio.h>
struct company
{
  char name[100];
  char address[100];
  long phone;
  int no_of_Employee;
} comp;
int main()
{
  printf("Enter company Detail:\n");
  printf("Enter company Name: ");
  scanf(" %[^\n]s", comp.name);
  printf("Enter Company Address: ");
  scanf(" %[^\n]s", comp.address);
  printf("Enter Company Phone Number: ");
  scanf("%ld", &comp.phone);
  printf("Enter Number of Employee in Company: ");
  scanf("%d", &comp.no_of_Employee);
  printf("\nThe Information you Entered is:\n");
  printf("Name: %s\t Address: %s\nPhone Number: %08ld\t Number of Employee: %d\n", comp.name, comp.address, comp.phone, comp.no_of_Employee);
  return 0;
}
