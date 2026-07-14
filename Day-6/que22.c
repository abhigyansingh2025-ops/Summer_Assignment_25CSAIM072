#include<stdio.h>
int main(){
   
    //Q22:  Write a program to Convert binary to decimal.
   
    int n,d=0,b=1,r;
   
    printf("Enter a binary number: ");
    scanf("%d",&n);

    if (n<0 || n>1) {
        printf("Invalid input! Please only enter binary digits (0 or 1).");
        return 0;
    }
   
    while (n>0) {
        r=n%10;
        d=d+r*b;
        n=n/10;
        b=b*2;
    }
    printf("Decimal equivalent: %d",d);
   
    return 0;
}