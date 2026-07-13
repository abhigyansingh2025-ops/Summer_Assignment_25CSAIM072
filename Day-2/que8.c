#include<stdio.h>
int main(){
    
    //Q8:   Write a program to Check whether a number is palindrome.
   
    int n,r,sum=0,x;
   
    printf("Enter your number: ");
    scanf("%d",&n);
    x=n;

    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum*10+r;
     }
    if(x==sum){
        printf("The number is palindrome.\n");
    }
    else{      
        printf("The number is not palindrome.\n");
    }

    return 0;
}