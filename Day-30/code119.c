#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[50];
    float salary;
};
int main() {
    int n, i;

    printf(" MINI EMPLOYEE MANAGEMENT SYSTEM \n");
    printf("How many employee records do you want to input? ");
    
    if(scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of employees! Exiting program.\n");
        return 1; 
    }
    struct Employee emp[n];

    printf("\n ENTER EMPLOYEE DETAILS \n");
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Enter Employee ID: ");
        if(scanf("%d", &emp[i].id) != 1) {
            printf("Invalid input! Setting ID to 0.\n");
            emp[i].id = 0;
            while(getchar() != '\n'); // Clear buffer
        }
        getchar(); // Clear trailing newline buffer
        
        printf("Enter Name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = 0; // Remove newline character

        printf("Enter Salary: ");
        if(scanf("%f", &emp[i].salary) != 1) {
            printf("Invalid input! Setting Salary to 0.0.\n");
            emp[i].salary = 0.0;
            while (getchar() != '\n'); // Clear buffer
        }
    }
    printf("\n====================================\n");
    printf("         EMPLOYEE REGISTRY          \n");
    printf("====================================\n");
    printf("%-10s %-20s %-10s\n", "Emp ID", "Name", "Salary");
    printf("------------------------------------\n");
    for(i = 0; i < n; i++) {
        printf("%-10d %-20s $%-10.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }
    printf("====================================\n");
    return 0;
}