#include<stdio.h>

//Q51: Write a program to Find largest and smallest element.

int main() {
    int arr[10],i,n,l,s;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    l=arr[0];
    s=arr[0];
    for(i=1;i<n;i++) {
        if(arr[i]>l) {
            l=arr[i];
        }
        if(arr[i]<s) {
            s=arr[i];
        }
    }
    printf("Largest element in the array is: %d\n",l);
    printf("Smallest element in the array is: %d\n",s);
    return 0;
}