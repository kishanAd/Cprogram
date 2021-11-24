/* @Author: Kishan Adhikari
  @Filename: distance.c
  @Created Date: 2078/05/10
  @Description:program to enter to Cartesian coordinate points (using structure) and display the
  distance between them
*/
#include <stdio.h>
#include <math.h>

struct coordinate
{
  long x_coordinate;
  long y_coordinate;
} a, b;

float calculate_distance()
{
  float distance;
  distance = sqrt(((b.x_coordinate - a.x_coordinate) * (b.x_coordinate - a.x_coordinate)) + ((b.y_coordinate - a.y_coordinate) * (b.y_coordinate - a.y_coordinate)));
  if (distance < 0)
  {
    distance = (-1) * distance;
  }
  return distance;
}
void main()
{
  printf("Enter coordinates:\n");
  printf("Enter x1:");
  scanf("%ld", &a.x_coordinate);
  printf("Enter y1:");
  scanf("%ld", &a.y_coordinate);
  printf("Enter x2:");
  scanf("%ld", &b.x_coordinate);
  printf("Enter y2:");
  scanf("%ld", &b.y_coordinate);
  printf("The distance between two points (%ld,%ld) and (%ld,%ld) is : %.3f\n", a.x_coordinate, a.y_coordinate, b.x_coordinate, b.y_coordinate, calculate_distance());
}
