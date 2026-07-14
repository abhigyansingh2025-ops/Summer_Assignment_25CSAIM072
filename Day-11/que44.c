#include<stdio.h>

//Q44: Write a program to Write function to find factorial.

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("Factorial is %d",factorial(n));
    return 0;
}