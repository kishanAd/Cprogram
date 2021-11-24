/* @Author: Kishan Adhikari
  @Filename: enum.c
  @Created Date: 2078/05/12
  @Description:program to show programming examples with union and enumerations.


  Union is another user defined data type.It has similar syntax as that of structure
  It can only handle one data type as it has same storage location for all union members.
  If we define union of Student having member name and age.Then it can only hold one of name and age.
  With a union, all members share the same memory.
  It is mostly used in embedded system as it lack memory resources
*/

#include <stdio.h>
union student
{
  int grade; //union size is of largest member
  int age;
  int rollno;
};

int main()
{
  union student s;
  s.grade = 9;
  s.age = 12;
  s.rollno = 21;
  printf("Grade=%d\n", s.grade);
  printf("age=%d\n", s.age);
  printf("Rollno=%d\n", s.rollno); //All have same memory and same value that is last value
  return 0;
}