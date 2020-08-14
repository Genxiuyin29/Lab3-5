#include <stdio.h>

int main(void) {   
  float b,h,area;

  printf("Enter Base : ");
  scanf("%f",&b);

  printf("Enter Hight : ");
  scanf("%f",&h);

  area = 0.5*b*h;

  printf("Area = %0.2f",area);

  return 0;
}