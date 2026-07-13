#include <stdio.h>
int main(){

    //Q5:  Write a program to Find sum of digits of a number.
    
    int n,r,sum=0;
    
    printf("Enter your number: ");
    scanf("%d", &n);
    
    while (n>0) {
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    printf("Sum of digits: %d\n", sum);
    
    return 0;
}