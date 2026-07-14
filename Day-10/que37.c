#include<stdio.h>
int main(){

    //Q37: Write a program to Print star pyramid.
    //    *
    //   ***
    //  *****
    // *******
    //*********

    int i,j,k;
     for(i=1;i<=5;i++){
        for(j=5;j>=1;j--){
            if(i>=j){
                printf("*");                
            }
            else{
                printf(" ");
            }
        }
        for(k=1;k<=4;k++){
            if(i>k){
                printf("*");
            }
        }
        printf("\n");
     }
    return 0;
}