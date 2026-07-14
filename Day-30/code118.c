#include<stdio.h>
#include<string.h>
struct Book{
    int id;
    char title[100];
    char author[50];
};
int main() {
    int n, i;
    printf(" MINI LIBRARY SYSTEM \n");
    printf("How many books do you want to add to the library? ");

    if(scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of books! Exiting program.\n");
        return 1; 
    }
    struct Book library[n];

    printf("\n ADD BOOKS TO THE LIBRARY \n");
    for(i = 0; i < n; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Enter Book ID: ");
        if(scanf("%d", &library[i].id) != 1) {
            printf("Invalid input! Setting Book ID to 0.\n");
            library[i].id = 0;
            while(getchar() != '\n'); // Clear buffer
        }
        getchar(); // Clear trailing newline buffer
    
        printf("Enter Book Title: ");
        fgets(library[i].title, sizeof(library[i].title), stdin);
        library[i].title[strcspn(library[i].title, "\n")] = 0; // Remove newline character

        printf("Enter Author Name: ");
        fgets(library[i].author, sizeof(library[i].author), stdin);
        library[i].author[strcspn(library[i].author, "\n")] = 0;
    }
    printf("\n==================================================\n");
    printf("                  LIBRARY CATALOG                 \n");
    printf("==================================================\n");
    printf("%-10s %-25s %-15s\n", "Book ID", "Title", "Author");
    printf("--------------------------------------------------\n");
    
    for(i = 0; i < n; i++) {
        printf("%-10d %-25s %-15s\n", library[i].id, library[i].title, library[i].author);
    }
    printf("==================================================\n");
    return 0;
}