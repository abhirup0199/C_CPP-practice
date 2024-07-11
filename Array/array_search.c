#include <stdio.h>

int main() {
  int array[100], element, size, found = 0;
  int i ;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  printf("Enter the elements of the array: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  printf("Enter the element to search: ");
  scanf("%d", &element);

  for (i = 0; i < size; i++) {
    if (array[i] == element) {
      found = 1;
      break;
    }
  }

  if (found == 1) {
    printf("The element is present in the array at index %d.\n", i);
    printf("The element is %d.\n", array[i]);
  } else {
    printf("The element is not present in the array.\n");
  }

  return 0;
}
