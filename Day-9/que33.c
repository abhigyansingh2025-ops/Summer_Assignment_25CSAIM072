#include<stdio.h>
int main(){
    
    //Q33: Write a program to Print reverse star pattern.
    //*****
    //****
    //***
    //**
    //*
    
    int i,j;
    for(i=1;i<=5;i++){
        for(j=5;j>=1;j--){
            if(j>=i){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}