#include <stdio.h>
#include <string.h>

struct batsman
{
  char name[100];
  int run;
  int dis;
  float average;
};
int main()
{
  char batsmanname[100];
  int i, value;
  struct batsman b[2], bat;
  for (i = 0; i < 2; i++)
  {
    printf("Batsman[%d]: ", i);
    scanf(" %[^\n]s", b[i].name);
    printf("Run : ");
    scanf("%d", &b[i].run);
    printf("Number of dismissal: ");
    scanf("%d", &b[i].dis);
    b[i].average = b[i].run / b[i].dis;
  }
  printf("enter name: ");
  scanf(" %[^\n]s", batsmanname);
  for (i = 0; i < 2; i++)
  {

    value = strcmp(batsmanname, b[i].name);
    if (value == 0)
    {
      bat = b[i];
      printf("Batting Average: %.2f", b[i].average);
      break;
    }
  }
  return 0;
}