#include<stdio.h>
int main() 
{
    int arr[50];
    int n = 0;      // Holds current size of array
    int choice;
    int i;
    while (1) {
        printf("\n--- ARRAY OPERATIONS MENU ---\n");
        printf("1. Insert Elements\n");
        printf("2. Display Array\n");
        printf("3. Find Sum of Elements\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        // If user enters a letter instead of a number, clear it and restart menu
        if(scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number from 1 to 4.\n");
            while (getchar() != '\n'); // Clean garbage input from buffer
            continue;
        }
        if(choice == 4) {
            printf("Exiting Array System. Goodbye!\n");
            break;
        }
        switch (choice) {
            case 1:
                printf("How many elements do you want to add? (Max 50): ");
                if(scanf("%d", &n) != 1 || n <= 0 || n > 50) {
                    printf("Invalid array size!\n");
                    while (getchar() != '\n'); // Clean buffer
                    n = 0;                     // Reset size to safe state
                } else {
                    // Safe entry of array elements
                    for(i = 0; i < n; i++) {
                        printf("Element [%d]: ", i);
                        if(scanf("%d", &arr[i]) != 1) {
                            printf("Invalid element input! Stopping insertion.\n");
                            while (getchar() != '\n'); // Clean buffer
                            n = 0;                     // Reset size to wipe invalid array
                            i = n;                     // Force exit the for loop safely
                        }
                    }
                    if(n > 0) {
                        printf("Elements saved successfully!\n");
                    }
                }
                break;
            case 2:
                if(n == 0) {
                    printf("Array is empty! Please insert elements first.\n");
                } else {
                    printf("Array elements: ");
                    for(i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                if(n == 0) {
                    printf("Array is empty! Total sum is 0.\n");
                } else {
                    int sum = 0;
                    for(i = 0; i < n; i++) {
                        sum = sum + arr[i];
                    }
                    printf("Sum of all elements: %d\n", sum);
                }
                break;
            default:
                printf("Invalid choice! Please select 1, 2, 3, or 4.\n");
        }
    }
return 0;
}