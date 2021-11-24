/*
  @Filename:result.c
  @Author:Kishan Adhikari
  @Created Date:2021/07/20
  Write a program to input marks of 5 subjects (Physics, Chemistry, Math, English and
  Biology) for a student. Display the rank of each subjects and also the result of total marks
  and percentage obtained with his/her rank in the class. The rank is categorized as fail
  (marks < 40%), pass & third division (marks between 40 to 55%), second (marks between
  55 to 65%), first (marks between 65 to 80%), Distinction (marks between 80 to 95%), extra
  ordinary (marks above 95 to100%)
*/

#include <stdio.h>
int main()
{
  int phy, chem, math, eng, bio, Obtainedmarks;

  float Percentage;
  printf("Enter marks of Physics, Chemistry, Math, English and Biology:\n");
  scanf("%d%d%d%d%d", &phy, &chem, &math, &eng, &bio);
  printf("The marks of student in different subject is:\nPhysics\t\t%d\nChemistry\t%d\nMath\t\t%d\nEnglish\t\t%d\nBiology\t\t%d\n", phy, chem, math, eng, bio);
  Obtainedmarks = phy + chem + math + bio + eng;
  printf("obtained marks=%d\n", Obtainedmarks);
  Percentage = (Obtainedmarks / 500.0) * 100;
  printf("Percentage=%.2f%%\n", Percentage);

  if (Percentage < 40)
  {
    printf("The student is fail with %.2f%%\n", Percentage);
  }
  else if (Percentage >= 40 && Percentage < 55)
  {
    printf("The student is pass with third division and %.2f%%\n", Percentage);
  }
  else if (Percentage >= 55 && Percentage < 65)
  {
    printf("The student is pass with second division and %.2f%%\n", Percentage);
  }
  else if (Percentage >= 65 && Percentage < 80)
  {
    printf("The student is pass with first division and %.2f%%\n", Percentage);
  }
  else if (Percentage >= 80 && Percentage < 95)
  {
    printf("The student is pass with distinction and %.2f%%\n", Percentage);
  }
  else
  {
    printf("The student is extra ordinary with %.2f%%\n", Percentage);
  }
  return 0;
}