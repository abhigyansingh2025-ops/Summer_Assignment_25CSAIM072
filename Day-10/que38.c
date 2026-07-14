#include<stdio.h>
int main(){

    //Q38: Write a program to Print reverse pyramid.
    //*********
    // *******
    //  *****
    //   ***
    //    *

    int i,j,k;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i<=j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(k=4;k>=1;k--){
            if(i<=k){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}