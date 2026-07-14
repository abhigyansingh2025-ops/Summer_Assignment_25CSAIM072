#include<stdio.h>
int main() 
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};    
    int n1 = 4, n2 = 4;
    printf("Intersection of arrays: ");
    // Check each element of arr1 to see if it exists in arr2
    for(int i = 0; i < n1; i++) 
    {
        for(int j = 0; j < n2; j++) 
        {
            if(arr1[i] == arr2[j]) 
            {
                printf("%d ", arr1[i]);
                break; // Move to the next element in arr1
            }
        }
    }
    printf("\n");
    return 0;
}