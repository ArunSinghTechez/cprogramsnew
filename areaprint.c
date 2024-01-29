#include<stdio.h>

#define PI 3.14


//program for area print

int main(){
  float radius,area;

  printf("enter the radius of a circle \n");
  scanf("%f",&radius);
  area = PI * radius * radius;
  printf("the area of the circle is %f \n ", area);







  return 0;
}
