#include<stdio.h>
int main(){

    //Q21:  Write a program to Convert decimal to binary.
    
    int n,r,b=0,p=1;

    printf("Enter a integer number: ");
    scanf("%d",&n);

    printf("Binary of %d is: ",n);

    while(n>0){
        r=n%2;
        b=b+r*p;
        n=n/2;
        p=p*10;
    }
    printf("%d",b);

    return 0;
}