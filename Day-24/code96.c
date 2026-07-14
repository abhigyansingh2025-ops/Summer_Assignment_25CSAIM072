#include<stdio.h>
int main() 
{
    char str[100];
    int seen[256] = {0}; 
    int i = 0, j = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while(str[i] != '\0') {
        int asciiValue = (unsigned char)str[i];
        if(seen[asciiValue] == 0) {
            seen[asciiValue] = 1; 
            str[j] = str[i];    
            j++;
        }
        i++;
    }
    str[j] = '\0';
    printf("String after removing duplicates: %s\n", str);
    return 0;
}