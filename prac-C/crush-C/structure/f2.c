#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book_info {
    char* name;
    char* author; 
    int pub_year;
};

struct book_list {
    struct book_info** collection; // Array of pointers to books
    int count;
};

// Function prototypes
void register_book(struct book_list *bl);
void print_book_list(struct book_list *bl);

int main() {
    int input, flag = 0;
    // Initialize the book list
    struct book_list my_list = { .collection = NULL, .count = 0 };

    printf("Welcome to the Book Management Program!\n");
    
    while(1) {
        printf("\n--- Menu ---\n1. View all books\n2. Register a book\n3. Exit\nSelection: ");
        if (scanf("%d", &input) != 1) break;

        switch(input) {
            case 1:
                print_book_list(&my_list);
                break;
            case 2:
                register_book(&my_list);
                break;
            case 3:
                flag = 1;
                break;
            default:
                printf("Invalid input.\n");
        }
        if (flag) break;
    }

    // Clean up memory before exiting (Good practice!)
    for(int i = 0; i < my_list.count; i++) {
        free(my_list.collection[i]->name);
        free(my_list.collection[i]->author);
        free(my_list.collection[i]);
    }
    free(my_list.collection);

    return 0;
}

void register_book(struct book_list *bl) {
    char temp_name[100], temp_author[100];
    int year;

    printf("Book Name: ");
    scanf(" %[^\n]s", temp_name); // Reads string with spaces
    printf("Author: ");
    scanf(" %[^\n]s", temp_author);
    printf("Year: ");
    scanf("%d", &year);

    // 1. Create the book
    struct book_info *new_book = malloc(sizeof(struct book_info));
    new_book->name = strdup(temp_name);     // Allocates and copies
    new_book->author = strdup(temp_author); // Allocates and copies
    new_book->pub_year = year;

    // 2. Expand the collection array
    bl->collection = realloc(bl->collection, sizeof(struct book_info*) * (bl->count + 1));
    bl->collection[bl->count] = new_book;
    bl->count++;

    printf("Book registered successfully!\n");
}

void print_book_list(struct book_list *bl) {
    if (bl->count == 0) {
        printf("The list is empty.\n");
        return;
    }
    for (int i = 0; i < bl->count; i++) {
        printf("%d. \"%s\" by %s (%d)\n", i + 1, 
               bl->collection[i]->name, 
               bl->collection[i]->author, 
               bl->collection[i]->pub_year);
    }
}