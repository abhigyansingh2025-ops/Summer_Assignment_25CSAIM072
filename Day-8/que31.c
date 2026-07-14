#include<stdio.h>
int main(){
    
    //Q31: Write a program to Print character triangle.
    //A
    //AB
    //ABC
    //ABCD
    //ABCDE

    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%c",'A'+j-1);
        }
    printf("\n");
    }
    return 0;
}