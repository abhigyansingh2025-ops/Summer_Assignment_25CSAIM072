#include<stdio.h>
int main(){

    //Q35: Write a program to Print repeated character pattern.
    //A
    //BB
    //CCC
    //DDDD
    //EEEEE

    int i,j;
    char ch='A';
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%c",ch);
        }
        ch++;
        printf("\n");
    }
    return 0;
}