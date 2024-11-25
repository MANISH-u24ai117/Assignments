#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    int pages;
};

void displayBook(struct Book *b) {
    printf("Title: %s\n", b->title);
    printf("Author: %s\n", b->author);
    printf("Pages: %d\n", b->pages);
}

int main() {
    struct Book book;
    printf("Enter book title: ");
    scanf("%s", book.title);
    printf("Enter author: ");
    scanf("%s", book.author);
    printf("Enter number of pages: ");
    scanf("%d", &book.pages);
    displayBook(&book);
    return 0;
}