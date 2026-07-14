#include<stdio.h>
struct Marksheet{
    int roll_no;
    float math;
    float science;
    float english;
    float total;
    float percentage;
};
int main() {
    struct Marksheet m;
    printf("    MARKSHEET GENERATION SYSTEM    \n");

    printf("Enter Roll Number: ");
    scanf("%d", &m.roll_no);
    
    printf("Enter Maths Marks: ");
    scanf("%f", &m.math);
    
    printf("Enter Science Marks: ");
    scanf("%f", &m.science);
    
    printf("Enter English Marks: ");
    scanf("%f", &m.english);

    m.total = m.math + m.science + m.english;
    m.percentage = m.total / 3.0;
    printf("\n====================================");
    printf("\n             MARKSHEET              ");
    printf("\n====================================");
    printf("\nRoll No: %d", m.roll_no);
    printf("\n------------------------------------");
    printf("\nMaths:   %.2f / 100", m.math);
    printf("\nScience: %.2f / 100", m.science);
    printf("\nEnglish: %.2f / 100", m.english);
    printf("\n------------------------------------");
    printf("\nTotal Marks: %.2f / 300", m.total);
    printf("\nPercentage:  %.2f%%", m.percentage);
    printf("\nResult:      %s", (m.percentage >= 40.0) ? "PASS" : "FAIL");
    printf("\n====================================\n");
    return 0;
}