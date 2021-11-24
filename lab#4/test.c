#include <stdio.h>
int main()
{
  int i, j, temp;
  int arr[10];
  printf("Enter element in array:\n");
  for (i = 0; i < 10; i++)
  {
    printf("arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < 10; i++)
  {
    for (j = i + 1; j < 10; j++)
    {
      if (arr[j] < arr[i])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for (i = 0; i < 10; i++)
  {
    printf("%d", arr[i]);
  }
  printf("\n");
  return 0;
#include <stdio.h>
int recursum(int num){
  int sum=0;
  while (sum!=0){
    sum+=num%10;
    num/=10;

  }
  if (num>9){
    return recursum
  }
}
int main(){

}