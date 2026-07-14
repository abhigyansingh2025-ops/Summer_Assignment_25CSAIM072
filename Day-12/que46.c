#include<stdio.h>

//Q46: Write a program to Write function for Armstrong.

int armstrong(int n){
    int r,x,sum=0;
    x=n;
    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(sum==x)
        return 1;
    else
        return 0;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(armstrong(num)==1)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}