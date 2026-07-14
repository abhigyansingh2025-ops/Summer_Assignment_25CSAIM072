#include<stdio.h>
int main() 
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};    
    int size1 = 3;
    int size2 = 3;
    int size3 = size1 + size2;
    int merged[size3];
    // Copy elements of first array
    for(int i = 0; i < size1; i++) 
    {
        merged[i] = arr1[i];
    }
    // Copy elements of second array
    for(int i = 0; i < size2; i++) 
    {
        merged[size1 + i] = arr2[i];
    }
    // Print the merged array
    printf("Merged Array: ");
    for(int i = 0; i < size3; i++) 
    {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}