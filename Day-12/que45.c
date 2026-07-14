#include<stdio.h>

//Q45: Write a program to Write function for palindrome.

int palindrome(int n){
    int r=0,sum=0,x;
    x=n;
    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum*10+r;
    }
    if(sum==x)
        return 1;
    else
        return 0;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(palindrome(num)==1)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    return 0;
}