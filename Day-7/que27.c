#include<stdio.h>
//Q27: Write a program to Recursive sum of digits.
int sum(int n){
    if (n==0){
        return 0;
    } else{
        return (n%10)+sum(n/10);
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of digits of %d is %d\n",n,sum(n));
    return 0;
}