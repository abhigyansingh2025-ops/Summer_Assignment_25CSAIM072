#include<stdio.h>
int main() 
{
    int arr1[] = {10, 15, 20, 25, 30};
    int arr2[] = {15, 30, 45, 60};    
    int n1 = 5, n2 = 4;
    printf("Common Elements: ");
    for(int i = 0; i < n1; i++) 
    {
        for(int j = 0; j < n2; j++) 
        {
            if(arr1[i] == arr2[j]) 
            {
                printf("%d ", arr1[i]);
                break; 
            }
        }
    }
    printf("\n");
    return 0;
}