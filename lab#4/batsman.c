#include <stdio.h>
#include <string.h>
struct batsman
{
  char name[100];
  int run;
  int dis;
};
int main()
{
  struct batsman b[5];
  int i;
  float avg;
  char username[100];
  scanf(" %[^\n]", username);
  for (i = 0; i < 3; i++)
  {
    printf("batsman[%d]:", i);
    scanf(" %[^\n]s", b[i].name);
    printf("run[%d]:", i);
    scanf("%d", &b[i].run);
    printf("dism[%d]:", i);
    scanf("%d", &b[i].dis);
    avg = b[i].run / b[i].dis;
    if (strcpy(username, b[i].name)==0)
    {
      printf("avg=%.2f", avg);
    }
  }
}
