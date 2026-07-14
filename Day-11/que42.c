#include<stdio.h>

//Q42: Write a program to Write function to find maximum.

int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int n1,n2;
printf("Enter your first number: ");
scanf("%d",&n1);
printf("Enter your second number: ");
scanf("%d",&n2);
printf("Maximum number is %d",max(n1,n2));
    return 0;
}