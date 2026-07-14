#include<stdio.h>

//Q56: Write a program to Find duplicates in array.

int main(){
    int arr[10],i,j,n,found=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Duplicate elements are: ");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
                found=1;
                break;
            }
        }
    }
    if(found==0){
        printf("No duplicate elements found\n");
    }
    return 0;
}