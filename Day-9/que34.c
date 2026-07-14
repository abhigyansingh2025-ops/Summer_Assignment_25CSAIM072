#include<stdio.h>
int main(){

    //Q34: Write a program to Print reverse number triangle.
    //12345
    //1234
    //123
    //12
    //1

    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=5;j++){
            if(j<=i){
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}