#include<stdio.h>
int main() 
{
    char str[100];
    int frequency[256] = {0};
    int i, maxCount = 0;
    char maxChar;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++) {
        frequency[(unsigned char)str[i]]++;
    }
    for(i = 0; i < 256; i++) {
        if(frequency[i] > maxCount) 
        {
            maxCount = frequency[i];
            maxChar = (char)i;
        }
    }
    printf("Maximum occurring character is '%c', appearing %d times.\n", maxChar, maxCount);
    return 0;
}