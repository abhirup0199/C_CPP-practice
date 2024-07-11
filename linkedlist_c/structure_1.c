#include <stdio.h>

#define MAX_BOOKS 10
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 50

// Structure to represent a book
struct Book {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    int year;
    float price;
};

int main() {
    struct Book books[MAX_BOOKS];

    // Input book information for 10 books
    printf("Enter information for 10 books:\n");
    for (int i = 0; i < MAX_BOOKS; i++) {
        printf("Book %d\n", i + 1);
        printf("Enter title: ");
        scanf("%s", books[i].title);

        printf("Enter author: ");
        scanf("%s", books[i].author);

        printf("Enter year of publication: ");
        scanf("%d", &books[i].year);

        printf("Enter price: ");
        scanf("%f", &books[i].price);
    }

    // Displaying information of all 10 books
    printf("\nDisplaying information of all 10 books:\n");
    for (int i = 0; i < MAX_BOOKS; i++) {
        printf("Book %d\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year of publication: %d\n", books[i].year);
        printf("Price: $%.2f\n", books[i].price);
        printf("\n");
    }

    return 0;
}
