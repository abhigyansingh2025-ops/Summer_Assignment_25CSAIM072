#include<stdio.h>
#include<string.h>
struct Employee{
    int id;
    char name[50];
    char department[30];
};
int main() {
    struct Employee e;
    printf("    EMPLOYEE MANAGEMENT SYSTEM    \n");
    printf("Enter Employee ID: ");
    scanf("%d", &e.id);
    getchar(); 
    printf("Enter Employee Name: ");
    fgets(e.name, sizeof(e.name), stdin);
    e.name[strcspn(e.name, "\n")] = 0;
    printf("Enter Department: ");
    fgets(e.department, sizeof(e.department), stdin);
    e.department[strcspn(e.department, "\n")] = 0;
    // Display Record
    printf("\n    EMPLOYEE RECORD SAVED    \n");
    printf("Employee ID: %d\n", e.id);
    printf("Name:        %s\n", e.name);
    printf("Department:  %s\n", e.department);
    return 0;
}