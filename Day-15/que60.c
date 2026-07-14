#include<stdio.h>

//Q60: Write a program to Move zeroes to end.

int main() {
    int arr[10],i,j=0;
    printf("Enter 10 elements: ");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    while(j<10){
        arr[j]=0;
        j++;
    }
    printf("Array after moving zeroes to end: ");
    for(i=0;i<10;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}