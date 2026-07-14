#include<stdio.h>
#include<string.h>
struct Item{
    int code;
    char name[50];
    int quantity;
    float price;
};
int main() 
{
    struct Item product;
    int choice;
    product.code = 0; // Initial state checking
    while (1) {
        printf("\n--- INVENTORY MANAGEMENT SYSTEM ---\n");
        printf("1. Add Product Details\n");
        printf("2. Display Product Status\n");
        printf("3. Check Stock Warning Level\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        if(choice == 4) {
            printf("Exiting Inventory System. Goodbye!\n");
            break;
        }
        switch (choice) {
            case 1:
                printf("Enter Product Code: ");
                scanf("%d", &product.code);
                getchar(); // Clear buffer
                
                printf("Enter Product Name: ");
                fgets(product.name, sizeof(product.name), stdin);
                product.name[strcspn(product.name, "\n")] = 0; 
                
                printf("Enter Quantity in Stock: ");
                scanf("%d", &product.quantity);
                
                printf("Enter Unit Price: $");
                scanf("%f", &product.price);
                
                printf("Product added to system!\n");
                break;
            case 2:
                if(product.code == 0) {
                    printf("No inventory data found. Please add a product first.\n");
                } else {
                    printf("\n--- CURRENT INVENTORY ---\n");
                    printf("Code:     %d\n", product.code);
                    printf("Name:     %s\n", product.name);
                    printf("Quantity: %d units\n", product.quantity);
                    printf("Price:    $%.2f\n", product.price);
                }
                break;
            case 3:
                if(product.code == 0) {
                    printf("Inventory empty.\n");
                } else if (product.quantity < 5) {
                    printf("ALERT: Stock level is critical (%d left)! Reorder immediately.\n", product.quantity);
                } else {
                    printf("Stock is healthy. Current stock: %d units.\n", product.quantity);
                }
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
return 0;
}