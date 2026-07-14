#include<stdio.h>
int main(){

    //Q14:  Write a program to Find nth Fibonacci term.

    int n,a=0,b=1,i,sum;
   
    printf("Enter your integer number: ");
    scanf("%d",&n);
   
    if(n==1){
        printf("Fibonacci term: %d",a);
    }
    else if(n==2){
        printf("Fibonacci term: %d",b);
    }
    else{
        for(i=2;i<n;i++){
            sum=a+b;
            a=b;
            b=sum;
        }
        printf("Fibonacci term: %d",sum);
    }

    return 0;
}