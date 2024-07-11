#include <stdio.h>

int area(int length, int breadth) {
  return length * breadth;
}

int perimeter(int length, int breadth) {
  return 2 * (length + breadth);
}

int main() {
  int length, breadth;

  printf("Enter the length of the rectangle: ");
  scanf("%d", &length);

  printf("Enter the breadth of the rectangle: ");
  scanf("%d", &breadth);

  int area_of_rectangle = area(length, breadth);
  int perimeter_of_rectangle = perimeter(length, breadth);

  printf("The area of the rectangle is: %d\n", area_of_rectangle);
  printf("The perimeter of the rectangle is: %d\n", perimeter_of_rectangle);

  return 0;
}
