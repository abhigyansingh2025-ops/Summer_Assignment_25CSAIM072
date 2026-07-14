#include<stdio.h>
int main(){
    //Q11	Write a program to Find GCD of two numbers.

    int a,b,i,gcd;

    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    for(i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }

    printf("GCD is: %d",gcd);

    return 0;
}