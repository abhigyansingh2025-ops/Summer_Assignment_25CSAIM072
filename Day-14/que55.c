#include<stdio.h>

//Q55: Write a program to Second largest element.

int main(){
    int arr[10],i,n,l,sl;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    l=sl=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>l){
            sl=l;
            l=arr[i];
        }else if(arr[i]>sl && arr[i]!=l){
            sl=arr[i];
        }
    }
    if(sl==l){
        printf("There is no second largest element\n");
    }else{
        printf("Second largest element is %d\n",sl);
    }
    return 0;
}