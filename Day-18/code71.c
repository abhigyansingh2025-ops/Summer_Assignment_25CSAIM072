#include<stdio.h>
int main() 
{
    int arr[] = {11, 12, 22, 25, 34, 64, 90}; // Array MUST be sorted
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 25; // Element to find
    int low = 0;
    int high = n - 1;
    int found_idx = -1;
    while(low <= high) 
    {
        int mid = low + (high - low) / 2;    
        if (arr[mid] == target) 
        {
            found_idx = mid;
            break; // if Target found, exit loop
        }
        else if(arr[mid] < target) 
        {
            low = mid + 1;
        } 
        else
        {
            high = mid - 1;
        }
    }
    if(found_idx != -1){
        printf("Element %d found at index %d.\n", target, found_idx);
    }else
    {
        printf("Element %d not found in the array.\n", target);
    }
    return 0;
}