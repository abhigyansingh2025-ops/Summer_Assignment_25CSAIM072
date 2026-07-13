#include<stdio.h>
int main(){

    //Q7: Write a program to Find product of digits.

    int n,r,sum=1;

    printf("Enter your number: ");
    scanf("%d",&n);

    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum*r;
     }
    printf("Product of digits: %d\n", sum);

    return 0;
}