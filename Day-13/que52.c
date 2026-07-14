#include<stdio.h>

//Q52: Write a program to Count even and odd elements.

int main(){
    int arr[10],i,n,even=0,odd=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("The number of even elements is: %d\n",even);
    printf("The number of odd elements is: %d\n",odd);
    return 0;
}