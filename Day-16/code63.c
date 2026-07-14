#include<stdio.h>
int main() 
{
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    int size = sizeof(arr) / sizeof(arr[0]);
    int found = 0;    
    for(int i = 0; i < size; i++) 
    {
        for(int j = i + 1; j < size; j++) 
        {
            if(arr[i] + arr[j] == target) 
            {
                printf("Pair found: %d and %d (Sum = %d)\n", arr[i], arr[j], target);
                found = 1;
                break; 
            }
        }
        if(found) break; // Stop after finding the first pair
    }
    if(!found) 
    {
        printf("No pair found with the given sum.\n");
    }
    return 0;
}