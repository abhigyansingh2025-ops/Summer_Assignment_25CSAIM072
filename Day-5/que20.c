#include<stdio.h>
int main(){

    //Q20: Write a program to Find largest prime factor.

    int n,i,l;
    printf("Enter your number: ");
    scanf("%d",&n);

    for(i=2;i<=n;i++){
        if(n%i==0){
            l=i;
            n=n/i;
        }
    }
    printf("Largest prime factor is: %d",l);

    return 0;
}