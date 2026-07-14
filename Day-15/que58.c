#include<stdio.h>

//Q58: Write a program to Rotate array left.

int main(){
    int i,arr[10];
    printf("Enter the element of array: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original array: ");
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    int fe=arr[0];
    for(i=0;i<9;i++){
        arr[i]=arr[i+1];
    }
    arr[9]=fe;
    printf("Rotated array: ");
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}