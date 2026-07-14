#include<stdio.h>

//Q48: Write a program to Write function for perfect number.

int perfect(int n){
    int i,sum=0;
    if(n<=1){
        return 0;
    }
    for(i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n)
        return 1;
    else
        return 0;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(perfect(num)==1)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);
    return 0;
}