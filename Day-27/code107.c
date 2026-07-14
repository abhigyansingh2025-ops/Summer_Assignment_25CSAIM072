#include<stdio.h>
struct Salary{
    int emp_id;
    float basic;
    float allowance;
    float gross;
};
int main() {
    struct Salary s;
    printf("    SALARY MANAGEMENT SYSTEM    \n");
    printf("Enter Employee ID: ");
    scanf("%d", &s.emp_id);
    
    printf("Enter Basic Salary: ");
    scanf("%f", &s.basic);
    
    printf("Enter Medical Allowance: ");
    scanf("%f", &s.allowance);

    s.gross = s.basic + s.allowance;
    printf("\n    SALARY DETAILS    \n");
    printf("Employee ID:     %d\n", s.emp_id);
    printf("Basic Salary:    $%.2f\n", s.basic);
    printf("Allowance:       $%.2f\n", s.allowance);
    printf("-------------------------\n");
    printf("Total Gross:     $%.2f\n", s.gross);
    return 0;
}