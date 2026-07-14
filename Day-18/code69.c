#include<stdio.h>
int main() 
{
    int arr[] = {91,71,51,31,11,21,81};
    int n = sizeof(arr) / sizeof(arr[0]);    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array using Bubble Sort: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}