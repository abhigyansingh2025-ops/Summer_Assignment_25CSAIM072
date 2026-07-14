#include<stdio.h>
#include<string.h>
struct Student{
    int id;
    char name[50];
    int age;
};
int main() {
    struct Student s;

    printf("    STUDENT RECORD MANAGEMENT SYSTEM    \n");
    printf("Enter Student ID: ");
    scanf("%d", &s.id);
    getchar();
    printf("Enter Student Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = 0; 
    printf("Enter Student Age: ");
    scanf("%d", &s.age);
    printf("\n    STUDENT RECORD SAVED    \n");
    printf("ID:   %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Age:  %d\n", s.age);
    return 0;
}