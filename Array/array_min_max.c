#include <stdio.h>

int main() {
  int array[100], size, max, min;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  printf("Enter the elements of the array: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  max = array[0];
  min = array[0];

  for (int i = 1; i < size; i++) {
    if (array[i] > max) {
      max = array[i];
    }

    if (array[i] < min) {
      min = array[i];
    }
  }

  printf("The maximum element in the array is %d.\n", max);
  printf("The minimum element in the array is %d.\n", min);

  return 0;
}
