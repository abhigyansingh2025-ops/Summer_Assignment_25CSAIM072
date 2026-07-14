#include<stdio.h>

//Q58: Write a program to Rotate array right.

int main(){
    int i,temp,arr[10];
    printf("Enter the elements of array: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original array: ");
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
     temp = arr[9];
    for(i = 9; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    printf("\nArray after right rotation: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}