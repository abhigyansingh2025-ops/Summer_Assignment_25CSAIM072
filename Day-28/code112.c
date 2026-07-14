#include<stdio.h>
#include<string.h>
struct Contact{
    char name[50];
    char phone[15];
    char email[50];
};
int main() {
    struct Contact c;
    printf("    CONTACT MANAGEMENT SYSTEM    \n");
    
    printf("Enter Contact Name: ");
    fgets(c.name, sizeof(c.name), stdin);
    c.name[strcspn(c.name, "\n")] = 0;

    printf("Enter Phone Number: ");
    fgets(c.phone, sizeof(c.phone), stdin);
    c.phone[strcspn(c.phone, "\n")] = 0;

    printf("Enter Email Address: ");
    fgets(c.email, sizeof(c.email), stdin);
    c.email[strcspn(c.email, "\n")] = 0;

    printf("\n>>> CONTACT CARD SAVED <<<\n");
    printf("Name:  %s\n", c.name);
    printf("Phone: %s\n", c.phone);
    printf("Email: %s\n", c.email);
    return 0;
}