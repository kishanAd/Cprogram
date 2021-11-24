/* @Author: Kishan Adhikari
  @Filename: enum.c
  @Created Date: 2078/05/12
  @Description:program to show programming examples with union and enumerations.
*/

#include <stdio.h>
/*enum is a user defined data typein c language. Its syntax is enum{values1,values2,...}
  First element starts with 0 ,second element with 1 and so on
  We can change the default values by declaring values1=4 (value1 has 4 default value)
  */
enum Week
{
  Sunday = 1,
  Monday,
  Tuesday,
  Wednesday,
  Thursday,
  Friday,
  Saturday
};
int main()
{
  //enum week type variable
  enum Week today;
  today = Thursday;
  printf("Today is Day number %d\n", today);
  return 0;
}