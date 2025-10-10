#include <stdio.h>
#include <string.h>
#include <stdlib.h> 


typedef struct {
    int bookID;
    char title[100];
    char author[100];
    int year;
} Book;

#define MAX_BOOKS 100

void addBook(Book books[], int *count) {
    if (*count >= MAX_BOOKS) {
        printf("The library is full. Cannot add more books!\n");
        return;
    }

    printf("Enter Book ID: ");
    if (scanf("%d", &books[*count].bookID) != 1) {
        printf("Invalid Book ID input.\n");
        while (getchar() != '\n');
        return;
    }
    
    while (getchar() != '\n');

    printf("Enter Title: ");
    fgets(books[*count].title, sizeof(books[*count].title), stdin);
    books[*count].title[strcspn(books[*count].title, "\n")] = 0;

    printf("Enter Author: ");
    fgets(books[*count].author, sizeof(books[*count].author), stdin);
    books[*count].author[strcspn(books[*count].author, "\n")] = 0;

    printf("Enter Year: ");
    if (scanf("%d", &books[*count].year) != 1) {
        printf("Invalid Year input.\n");
        while (getchar() != '\n');
        return;
    }

    (*count)++;
    printf("Book added successfully!\n");
}

void searchBook(Book books[], int count, char title[]) {
    int found = 0;

    title[strcspn(title, "\n")] = 0;

    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Book ID: %d\n", books[i].bookID);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Year: %d\n", books[i].year);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

void displayBooks(Book books[], int count) {
    if (count == 0) {
        printf("The library is empty. No books to display.\n");
        return;
    }

    printf("\n--- All Books in Library (%d books) ---\n", count);
    for (int i = 0; i < count; i++) {
        printf("---------------------------\n");
        printf("Book ID: %d\n", books[i].bookID);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n", books[i].year);
    }
    printf("---------------------------\n");
}


int main() {
    Book library[MAX_BOOKS];
    int bookCount = 0;       
    int option;
    char searchTitle[100];

    do {
 
        printf("\n--- Library Management System ---\n");
        printf("1. Add new book\n");
        printf("2. Search book by title\n");
        printf("3. Display all books\n");
        printf("4. Exit program\n");
        printf("Choose an option: ");

        if (scanf("%d", &option) != 1) {
            printf("Invalid option. Please enter a number from 1 to 4.\n");
            while (getchar() != '\n');
            continue;
        }

       
        while (getchar() != '\n');
        switch (option) {
            case 1:
                addBook(library, &bookCount);
                break;
            case 2:
                printf("Enter Title to Search: ");
                fgets(searchTitle, sizeof(searchTitle), stdin);
                searchBook(library, bookCount, searchTitle);
                break;
            case 3:
                displayBooks(library, bookCount);
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid option. Please enter a number from 1 to 4.\n");
        }
    } while (option != 4);

    return 0;
}