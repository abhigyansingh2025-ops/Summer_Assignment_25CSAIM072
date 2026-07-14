#include<stdio.h>
int main(){

    //Q12    Write a program to Find LCM of two numbers.

    int a,b,lcm;

    printf("Enter your first number: ");
    scanf("%d",&a);
    printf("Enter your second number: ");
    scanf("%d",&b);

    lcm=(a>b)?a:b;
    while(lcm%a!=0 || lcm%b!=0){
        lcm++;
    }
    printf("LCM is: %d",lcm);

    return 0;
}