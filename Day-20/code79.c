#include<stdio.h>
int main() 
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for(int i = 0; i < 3; i++) {
        int rowSum = 0; // Reset sum for each new row
        for (int j = 0; j < 3; j++) {
            rowSum += a[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }
return 0;
}