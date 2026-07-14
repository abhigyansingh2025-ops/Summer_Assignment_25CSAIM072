#include<stdio.h>
#include<string.h>
int main() 
{
    int choice;
    char str1[100], str2[100];
    while (1) {
        printf("\n--- STRING OPERATIONS MENU ---\n");
        printf("1. Find String Length\n");
        printf("2. Copy String\n");
        printf("3. Compare Two Strings\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        if(choice == 4) {
            printf("Exiting String System. Goodbye!\n");
            break;
        }
        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);
                printf("Length of string: %lu\n", strlen(str1));
                break;
            case 2:
                printf("Enter source string to copy: ");
                scanf("%s", str1);
                strcpy(str2, str1);
                printf("Successfully copied! New string: %s\n", str2);
                break;
            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                if(strcmp(str1, str2) == 0) {
                    printf("Both strings are identical.\n");
                } else {
                    printf("Strings are different.\n");
                }
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
return 0;
}