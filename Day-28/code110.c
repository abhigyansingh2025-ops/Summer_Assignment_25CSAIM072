#include<stdio.h>
#include<string.h>
struct BankAccount{
    int account_no;
    char holder_name[50];
    float balance;
};
int main() {
    struct BankAccount account;
    float amount;
    printf("    BANK ACCOUNT SYSTEM    \n");
    
    printf("Enter Account Number: ");
    scanf("%d", &account.account_no);
    getchar();
    
    printf("Enter Account Holder Name: ");
    fgets(account.holder_name, sizeof(account.holder_name), stdin);
    account.holder_name[strcspn(account.holder_name, "\n")] = 0;
    
    printf("Enter Initial Balance: $");
    scanf("%f", &account.balance);

    printf("\nEnter amount to deposit: $");
    scanf("%f", &amount);
    account.balance += amount; 

    printf("Enter amount to withdraw: $");
    scanf("%f", &amount);
    if(amount <= account.balance) {
        account.balance -= amount;
    } else {
        printf("Insufficient balance for withdrawal!\n");
    }
    printf("\n>>> FINAL ACCOUNT STATEMENT <<<\n");
    printf("Acc No:  %d\n", account.account_no);
    printf("Name:    %s\n", account.holder_name);
    printf("Balance: $%.2f\n", account.balance);
    return 0;
}