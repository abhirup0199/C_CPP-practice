#include <stdio.h>

void linearSearch(int arr[], int n, int key) {
    int i, found = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }
    if (found)
        printf("Element found at index %d\n", i);
    else
        printf("Element not found\n");
}

void sortArray(int arr[], int n, int ascending) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int low, int high, int key) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            return binarySearch(arr, low, mid - 1, key);
        return binarySearch(arr, mid + 1, high, key);
    }
    return -1; // Element not found
}

int main() {
    int n, i, key, choice;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    printf("Choose sorting order:\n1. Ascending\n2. Descending\nEnter your choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            sortArray(arr, n, 1);
            printf("Array sorted in ascending order: ");
            break;
        case 2:
            sortArray(arr, n, 0);
            printf("Array sorted in descending order: ");
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }
    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    linearSearch(arr, n, key);
    
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1)
        printf("Element found at index %d (using binary search)\n", result);
    else
        printf("Element not found (using binary search)\n");
    
    return 0;
}
