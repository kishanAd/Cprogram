/* @Author: Kishan Adhikari
  @Filename: student.c
  @Created Date: 2078/05/12
  @Description:Write a program to read RollNo, Name, Address, Age & average-marks of 12 students in the
  BCT class and display the details from function.
*/
#include <stdio.h>
struct student
{
  int RollNo, Age;
  char Name[40], Address[40];
  int marks;
} info[2];
int total = 0;

float avg;
void display(struct student s[12]);

int main()
{
  struct student info[12];
  int i;
  printf("Enter student Details:\n");
  for (i = 0; i < 2; i++)
  {
    printf("Enter student Name: ");
    scanf(" %[^\n]s", info[i].Name);
    printf("Enter student Roll Number: ");
    scanf("%d", &info[i].RollNo);
    printf("Enter student Address: ");
    scanf(" %[^\n]s", info[i].Address);
    printf("Enter student age: ");
    scanf("%d", &info[i].Age);
    printf("Enter your total marks: ");
    scanf("%d", &info[i].marks);
    total += info[i].marks;
  }
  avg = total / 2;
  display(info);
}

void display(struct student s[12])
{
  printf("Displaying information\n");
  int i;
  for (i = 0; i < 2; i++)
  {
    printf("Name: %s\tRollNo: %d\tAddress: %s\tAge: %d\tMarks:%d\tAverage Marks:%.2f\n", s[i].Name, s[i].RollNo, s[i].Address, s[i].Age, s[i].marks, avg);
  }
}