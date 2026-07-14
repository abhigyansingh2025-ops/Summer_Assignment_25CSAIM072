#include<stdio.h>
int main(){

    //Q13:  Write a program to Generate Fibonacci series.

    int n,a=0,b=1,i,sum;

    printf("Enter your integer number: ");
    scanf("%d",&n);

    printf("Fibonacci series: %d %d ",a,b);
    for(i=2;i<n;i++){
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
    }

    return 0;
}