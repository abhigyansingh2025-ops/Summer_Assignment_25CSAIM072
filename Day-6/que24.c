#include<stdio.h>
int main(){
    //Q24:  Write a program to Find x^n without pow().
    
    int x,n,i,r=1;
    
    printf("Enter the base (x): ");
    scanf("%d",&x);
    printf("Enter the power (n): ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        r=r*x;
    }
    printf("Result: %d",r);
    
    return 0;
}