#include<stdio.h>

//Q53: Write a program to Linear search.

int main(){
    int arr[10],i,n,key,found=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            printf("Element found at position %d\n",i);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Element not found\n");
    }
    return 0;
}