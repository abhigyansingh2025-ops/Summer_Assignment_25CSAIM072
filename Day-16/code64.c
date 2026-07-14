#include<stdio.h>
int main() 
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);    
    int unique[size]; // Array to store unique elements
    int unique_size = 0;
    for(int i = 0; i < size; i++) 
    {
        int duplicate = 0;
        // Check if the element is already in the unique array
        for(int j = 0; j < unique_size; j++) 
        {
            if(arr[i] == unique[j]) 
            {
                duplicate = 1;
                break;
            }
        }
        // If it's not a duplicate, add it to the unique array
        if(!duplicate) 
        {
            unique[unique_size] = arr[i];
            unique_size++;
        }
    }
    // Print the array after removing duplicates
    printf("Array after removing duplicate elements: ");
    for(int i = 0; i < unique_size; i++) 
    {
        printf("%d ", unique[i]);
    }
    printf("\n");
    return 0;
}