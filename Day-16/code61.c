#include<stdio.h>
int main() 
{
    int arr[] = {1, 2, 4, 5, 6}; // 3 is missing
    int n = 6; // Total elements that should be there (N)
    int size = 5; // Size of current array
    
    int expected_sum = (n * (n + 1)) / 2;
    int actual_sum = 0;
    for(int i = 0; i < size; i++) 
    {
        actual_sum =actual_sum + arr[i];
    }
    int missing_number = expected_sum - actual_sum;
    printf("The missing number is: %d\n", missing_number);
    return 0;
}