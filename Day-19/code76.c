#include<stdio.h>
int main() 
{
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;
    // Calculating sum of diagonal elements (1, 5, 9)
    for(int i = 0; i < 3; i++) {
        sum = sum + A[i][i]; 
    }
    printf("Sum of the diagonal elements are: %d\n", sum);
    return 0;
}