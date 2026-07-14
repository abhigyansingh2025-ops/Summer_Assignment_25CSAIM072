#include<stdio.h>

//Q41: Write a program to Write function to find sum of two numbers.

int sum(int a,int b){
    return a+b;
}
int main(){
    int n1,n2;
    printf("Enter your first number: ");
    scanf("%d",&n1);
    printf("Enter your second number: ");
    scanf("%d",&n2);
    printf("Sum is: %d",sum(n1,n2));
    return 0;
}