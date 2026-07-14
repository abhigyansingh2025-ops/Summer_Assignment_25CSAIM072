#include<stdio.h>

//Q50: Write a program to Find sum and average of array.

int main(){
    int arr[10],i,n,sum=0,avg;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("The sum is: %d\n",sum);
    printf("The average is: %d\n",avg);
    return 0;
}