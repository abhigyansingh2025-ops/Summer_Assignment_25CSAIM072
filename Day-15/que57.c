#include<stdio.h>

//Q57: Write a program to Reverse array.

int main(){
    int i,arr[10];
    printf("Enter the elements of array: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original array: ");
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\nReversed array: ");
    for(i=9;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}