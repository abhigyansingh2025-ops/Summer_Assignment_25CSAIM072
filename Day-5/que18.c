#include<stdio.h>
int main(){

    //Q18:	Write a program to Check strong number.

    int n,i,j,sum=0,x,fact;
    printf("Enter your number: ");
    scanf("%d",&n);
    x=n;
    while(x>0){
        fact=1;
        i=x%10;
        for(j=1;j<=i;j++){
            fact=fact*j;
        }
        sum=sum+fact;
        x=x/10;
    }
    if(sum==n){
        printf("%d is a strong number",n);
    }
    else{
        printf("%d is not a strong number",n);
    }
    return 0;
}