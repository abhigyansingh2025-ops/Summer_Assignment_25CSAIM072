#include<stdio.h>
int main(){

    //Q39: Write a program to Print number pyramid.
    //    1
    //   121
    //  12321
    // 1234321
    //123454321

    int i,j,k;
    for(i=1;i<=5;i++){
        for(j=5;j>=1;j--){
            if(i>=j){
                printf("%d",i-j+1);
            }
            else{
                printf(" ");
            }
        }
        for(k=1;k<=4;k++){
            if(i>k){
                printf("%d",i-k);
            }
        }
        printf("\n");
    }
    return 0;
}