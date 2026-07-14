#include<stdio.h>
int main() 
{
    // Example of a symmetric matrix
    int a[3][3] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };    
    int isSymmetric = 1; // 1 means true
    // Check if a[i][j] equals a[j][i]
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] != a[j][i]) {
                isSymmetric = 0; // Found a mismatch, so it's not symmetric
                break;
            }
        }
    }
    if(isSymmetric == 1){
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
return 0;
}