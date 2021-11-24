/* @Author: Kishan Adhikari
   @filename:avg.c
   @Created Date: 2078/05/08
   @Description:program to read RollNo, Name, Address, Age & marks in physics, C, math in 1 st semester
   of three students in your class and display the student details with average marks achieved.
*/

#include <stdio.h>
struct student
{
  int RollNo;
  char Name[40];
  char Address[40];
  int age;
  struct subject
  {
    int marks;
  } physics, C, Math;

} info;

int main()
{
  float average;
  for (int i = 0; i < 3; i++)
  {
    printf("Enter student info for student %d:\n", i + 1);
    printf("Enter Roll Number: ");
    scanf("%d", &info.RollNo);
    printf("Enter student name: ");
    scanf(" %[^\n]s", info.Name);
    fflush(stdin);
    printf("Enter address: ");
    scanf(" %[^\n]s", info.Address);
    fflush(stdin);
    printf("Enter age of student:");
    scanf("%d", &info.age);
    printf("Enter student Marks in Physics:");
    scanf("%d", &info.physics.marks);
    printf("Enter student Marks in C:");
    scanf("%d", &info.C.marks);
    printf("Enter student Marks in Math:");
    scanf("%d", &info.Math.marks);
    average = (info.physics.marks + info.C.marks + info.Math.marks) / 3.0;
    printf("Average marks of student is %.3f\n", average);
  }
  return 0;
}
