#include<stdio.h>

//Q54: Write a program to Frequency of an element.

int main(){
    int arr[10],i,n,key,count=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to find frequency: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    if(count>0){
        printf("Frequency of %d is %d\n",key,count);
    }else{
        printf("Element not found\n");
    }
    return 0;
}
