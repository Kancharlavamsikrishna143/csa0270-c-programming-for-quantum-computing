#include <stdio.h>
#include <string.h>

// Define the maximum number of books in the library
#define MAX_BOOKS 100

// Define the book structure
struct book {
    char title[50];
    char author[50];
    int year;
    float price;
};

// Declare an array to hold the book details
struct book library[MAX_BOOKS];

// Declare a variable to keep track of the number of books in the library
int num_books = 0;

// Function to add book details
void add_book() {
    // Check if there's still space in the library
    if (num_books >= MAX_BOOKS) {
        printf("The library is full, cannot add more books.\n");
        return;
    }
    
    // Prompt the user to input book details
    printf("Enter book title: ");
    scanf("%s", library[num_books].title);
    printf("Enter book author: ");
    scanf("%s", library[num_books].author);
    printf("Enter book publication year: ");
    scanf("%d", &library[num_books].year);
    printf("Enter book price: ");
    scanf("%f", &library[num_books].price);
    
    // Increment the number of books
    num_books++;
    
    printf("Book added successfully.\n");
}

// Function to display book details
void display_book() {
    // Check if there are any books in the library
    if (num_books == 0) {
        printf("The library is empty, cannot display any books.\n");
        return;
    }
    
    // Prompt the user to input the index of the book to display
    int index;
    printf("Enter the index of the book to display (0-%d): ", num_books-1);
    scanf("%d", &index);
    
    // Check if the index is valid
    if (index < 0 || index >= num_books) {
        printf("Invalid index, please enter a number between 0 and %d.\n", num_books-1);
        return;
    }
    
    // Display the book details
    printf("Title: %s\n", library[index].title);
    printf("Author: %s\n", library[index].author);
    printf("Publication year: %d\n", library[index].year);
    printf("Price: %.2f\n", library[index].price);
}

// Function to list all books of given author
void list_author_books() {
    // Check if there are any books in the library
    if (num_books == 0) {
        printf("The library is empty, cannot list any books.\n");
        return;
    }
    
    // Prompt the user to input the author name
    char author[50];
    printf("Enter the author name: ");
    scanf("%s", author);
    
    // Loop through all the books in the library
    int count = 0;
    for (int i = 0; i < num_books; i++) {
        // Check if the author matches
        if (strcmp(library[i].author, author) == 0) {
            // Display the book details
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("Publication year: %d\n", library[i].year);
            printf("Price: %.2f\n", library[i].price);
            
            count++;
        }
    }
    
    // Check if any books were found
    if (count == 0) {
        printf("No books found for author '%s
