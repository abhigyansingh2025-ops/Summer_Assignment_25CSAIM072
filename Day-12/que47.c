#include<stdio.h>

//Q47: Write a program to Write function for Fibonacci.

int fibonacci(int n){
    int a=0,b=1,c,i;
    if(n==0)
        return a;
    else if(n==1)
        return b;
    else{
        for(i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonacci series up to %d terms:\n", num);
    for(int i=0;i<num;i++){
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}