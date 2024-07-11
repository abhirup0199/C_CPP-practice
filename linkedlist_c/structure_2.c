#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50

// Structure to represent a student
struct Student {
    int rollNumber;
    char name[MAX_NAME_LENGTH];
    int age;
};

// Function to swap two student records
void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort students by roll number using bubble sort
void sortByRollNumber(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].rollNumber > students[j + 1].rollNumber) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

// Function to sort students by age using bubble sort
void sortByAge(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].age > students[j + 1].age) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

// Function to display student records
void displayStudents(struct Student students[], int n) {
    printf("Student Records:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Age: %d\n", students[i].rollNumber, students[i].name, students[i].age);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];

    printf("Enter student details for %d students:\n", MAX_STUDENTS);
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    int choice;
    printf("\nEnter sorting criteria:\n");
    printf("1. Sort by Roll Number\n");
    printf("2. Sort by Age\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        sortByRollNumber(students, MAX_STUDENTS);
        printf("\nSorted by Roll Number:\n");
        displayStudents(students, MAX_STUDENTS);
    } else if (choice == 2) {
        sortByAge(students, MAX_STUDENTS);
        printf("\nSorted by Age:\n");
        displayStudents(students, MAX_STUDENTS);
    } else {
        printf("\nInvalid choice.\n");
    }

    return 0;
}
