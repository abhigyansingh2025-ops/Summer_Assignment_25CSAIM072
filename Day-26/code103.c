#include<stdio.h>
int main()
{
    int choice;
    float balance = 5000.0; // Starting default balance
    float amount;
    while (1){
        printf("\n--- ATM Simulation ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        switch(choice) 
        {
            case 1:
                printf("\nYour current balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("\nEnter deposit amount: $");
                scanf("%f", &amount);
                if(amount > 0) 
                {
                    balance += amount;
                    printf("$%.2f deposited successfully.\n", amount);
                }else 
                {
                    printf("Invalid amount!\n");
                }
                break;
            case 3:
                printf("\nEnter withdrawal amount: $");
                scanf("%f", &amount);
                if(amount > balance) 
                {
                    printf("Insufficient balance!\n");
                }
                else if(amount <= 0) 
                {
                    printf("Invalid amount!\n");
                }
                else{
                    balance -= amount;
                    printf("$%.2f withdrawn successfully.\n", amount);
                }
                break;
            case 4:
                printf("\nThank you for using our ATM. Goodbye!\n");
                return 0;
                default:
                printf("\nInvalid choice! Please select an option between 1 and 4.\n");
        }
    }
return 0;
}