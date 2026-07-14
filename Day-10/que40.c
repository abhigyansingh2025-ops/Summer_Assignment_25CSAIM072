#include<stdio.h>
int main(){
    
    //Q40: Write a program to Print character pyramid.
    //    A
    //   ABA
    //  ABCBA
    // ABCDCBA
    //ABCDEDCBA

    int i,j,k;
    char ch='A';
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%c",ch++);
        }
        ch-=2;
        for(k=1;k<i;k++){
            printf("%c",ch--);
        }
        ch='A';
        printf("\n");
    }
    return 0;
}