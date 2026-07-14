#include<stdio.h>
#include<string.h>
struct Book{
    int id;
    char title[100];
    char author[50];
};
int main() {
    struct Book b;
    printf("    LIBRARY MANAGEMENT SYSTEM    \n");

    printf("Enter Book ID: ");
    scanf("%d", &b.id);
    getchar(); 
    
    printf("Enter Book Title: ");
    fgets(b.title, sizeof(b.title), stdin);
    b.title[strcspn(b.title, "\n")] = 0; 

    printf("Enter Author Name: ");
    fgets(b.author, sizeof(b.author), stdin);
    b.author[strcspn(b.author, "\n")] = 0;

    printf("\n>>> BOOK ADDED SUCCESSFULLY <<<\n");
    printf("Book ID: %d\n", b.id);
    printf("Title:   %s\n", b.title);
    printf("Author:  %s\n", b.author);
    return 0;
}