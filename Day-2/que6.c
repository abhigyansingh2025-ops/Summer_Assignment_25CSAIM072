#include<stdio.h>
int main(){

    //Q6: Write a program to Reverse a number.
  
    int n,r,sum=0;
  
    printf("Enter your number: ");
   scanf("%d",&n);  
   
   while(n>0){
       r=n%10;
       n=n/10;
       sum=sum*10+r;
    }
    printf("Reversed number: %d\n", sum);
    
    return 0;
}