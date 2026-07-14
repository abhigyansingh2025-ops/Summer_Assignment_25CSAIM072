#include<stdio.h>
int main() 
{
    char str[100], temp;
    int length = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while(str[length] != '\0') 
    {
        length++;
    }
    int start = 0;
    int end = length - 1;
    while (start < end) 
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;    
        start++;
        end--;
    }
    printf("Reversed string: %s\n", str);
return 0;
}