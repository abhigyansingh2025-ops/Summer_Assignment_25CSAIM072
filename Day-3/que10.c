#include<stdio.h>
int main(){
    //Q10	Write a program to Print prime numbers in a range.
    
    int s,e,i,j,x;

    printf("Enter the start of the range: ");
    scanf("%d", &s);
    printf("Enter the end of the range: ");
    scanf("%d", &e);

    printf("Prime numbers are: ");

    for(i=s;i<=e;i++){
        if(i<2){
            continue;
        }
        x=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                x=0;
                break;
            }
        }
        if(x==1)
            printf("%d ",i);
    }
    return 0;
}