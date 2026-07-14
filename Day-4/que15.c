#include<stdio.h>
int main(){

    //Q15:  Write a program to Check Armstrong number.
    
    int n,r,sum=0,x;
    
    printf("Enter your integer number: ");
    scanf("%d",&n);
    x=n;

    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(sum==x){
        printf("Armstrong number");
    }
    else{
        printf("Not an Armstrong number");
    }
    
    return 0;
}