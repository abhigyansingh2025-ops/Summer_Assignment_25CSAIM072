#include<stdio.h>
#include<string.h>
struct Student{
    int roll_no;
    char name[50];
    char course[30];
};
int main() {
    int n, i;
    printf(" STUDENT RECORD SYSTEM \n");
    printf("How many student records do you want to input? ");

    if(scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of students! Exiting program.\n");
        return 1; 
    }
    // Create an array of structures with the user-defined size
    struct Student s[n];
    printf("\n ENTER STUDENT RECORDS \n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Roll Number: ");
        if(scanf("%d", &s[i].roll_no) != 1) {
            printf("Invalid input! Setting Roll No to 0.\n");
            s[i].roll_no = 0;
            while(getchar() != '\n'); // Clear buffer
        }
        getchar(); // Clear trailing newline buffer
        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = 0; // Remove newline character

        printf("Enter Course: ");
        fgets(s[i].course, sizeof(s[i].course), stdin);
        s[i].course[strcspn(s[i].course, "\n")] = 0;
    }
    // Displaying all records dynamically based on 'n'
    printf("\n====================================\n");
    printf("        STUDENT DATABASE            \n");
    printf("====================================\n");
    printf("%-10s %-20s %-15s\n", "Roll No", "Name", "Course");
    printf("------------------------------------\n");
    for(i = 0; i < n; i++) {
        printf("%-10d %-20s %-15s\n", s[i].roll_no, s[i].name, s[i].course);
    }
    printf("====================================\n");
    return 0;
}