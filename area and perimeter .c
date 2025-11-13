#include<stdio.h>
int main()
{
  float side;
  float area;
  float perimeter;
  printf("enter the side lenth of the square:");
  scanf("%f", &side);
  area = side * side;
  perimeter = 4 * side;
  printf("the area of the square is: %.2f\n", area);
  printf("the perimeter of the square is: %.2f\n", perimeter);
  return 0;
}
