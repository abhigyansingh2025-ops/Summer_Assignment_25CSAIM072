#include<stdio.h>
int main() 
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = 4, n2 = 4;
    int arr3[8]; // Array to hold merged elements
    int i = 0, j = 0, k = 0;
    // Compare and merge elements from both arrays
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        }else
        {
            arr3[k] = arr2[j];
            j++;
        }
    k++;
    }
    while(i < n1) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while(j < n2) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    printf("Merged sorted array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");
    return 0;
}