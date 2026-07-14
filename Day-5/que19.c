#include<stdio.h>
int main(){

    //Q19: Write a program to Print factors of a number.

    int n,i;

    printf("Enter your number: ");
    scanf("%d",&n);
    printf("Factors of %d are: ",n);
    
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
    return 0;
}