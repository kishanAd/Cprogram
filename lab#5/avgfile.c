/*
Write a program to read RollNo, Name, Address, Age & marks in physics, C, math in
1stsemester of three students in your class. Store the records into a file std.txt located at
D:\drive. Display the student details with average marks achieved (use data files record
I/O).
*/
#include <stdio.h>
#include <stdlib.h>
float average;
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
};
float avg[3];

void display(struct student[12]);
int main()
{
  int i;
  struct student s[12];

  FILE *fptr;
  fptr = fopen("std.txt", "w+");
  if (fptr == NULL)
  {
    printf("Error opening file\n");
    exit(0);
  }

  for (i = 0; i < 3; i++)
  {
    printf("Enter student info for student %d:\n", i + 1);

    printf("Enter Roll Number: ");
    scanf("%d", &s[i].RollNo);
    printf("Enter student name: ");
    scanf(" %[^\n]s", s[i].Name);
    fflush(stdin);
    printf("Enter address: ");
    scanf(" %[^\n]s", s[i].Address);
    fflush(stdin);
    printf("Enter age of student:");
    scanf("%d", &s[i].age);
    printf("Enter student Marks in Physics:");
    scanf("%d", &s[i].physics.marks);
    printf("Enter student Marks in C:");
    scanf("%d", &s[i].C.marks);
    printf("Enter student Marks in Math:");
    scanf("%d", &s[i].Math.marks);
    avg[i] = (s[i].physics.marks + s[i].C.marks + s[i].Math.marks) / 3;
  }
  fwrite(s, sizeof(struct student), 3, fptr);
  printf("Successfully saved\n");
  fclose(fptr);
  printf("****Displaying the content of file*****\n");
  FILE *file_ptr;
  file_ptr = fopen("std.txt", "r");
  fread(s, sizeof(s), 12, file_ptr);
  for (i = 0; i < 12; i++)
  {
    printf("Name: %s\n", s[i].Name);
    printf("Roll no: %d\n", s[i].RollNo);
    printf("Address : %s", s[i].Address);
    printf("Physics: %d\tC: %d\t Math:%d\t\Average:%.2f\n", s[i].physics.marks, s[i].C.marks, s[i].Math.marks, avg[i]);
  }
  fclose(file_ptr);
  return 0;
}
