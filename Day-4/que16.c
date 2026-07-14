#include<stdio.h>
int main(){

    //Q16:  Write a program to Print Armstrong numbers in a range.

    int n1,n2,r,sum=0,x,i;

    printf("Enter the range (two numbers): ");
    scanf("%d %d",&n1,&n2);

    for(i=n1;i<=n2;i++){
        x=i;
        sum=0;
        while(x>0){
            r=x%10;
            x=x/10;
            sum=sum+r*r*r;
        }
        if(sum==i){
            printf("%d ",i);
        }
    }

    return 0;
}
