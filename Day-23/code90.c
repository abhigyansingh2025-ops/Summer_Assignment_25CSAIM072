#include<stdio.h>
int main() 
{
    char str[100];
    int frequency[256] = {0}; 
    int i;
    char result = '\0';
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        if(frequency[(unsigned char)str[i]] > 0) {
            result = str[i];
            break;
        }
        frequency[(unsigned char)str[i]]++;
    }
    if(result != '\0') 
    {
        printf("First repeating character is: %c\n", result);
    }else 
    {
        printf("No repeating characters found.\n");
    }
return 0;
}