#include<stdio.h>

//Q26: Write a program to Recursive Fibonacci.

int fib(int n){
    if (n==0){
        return 0;
    } 
    else if (n==1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int n,i;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series: ");
    for(i=0;i<n;i++){
        printf("%d ",fib(i));
    }
    return 0;
}