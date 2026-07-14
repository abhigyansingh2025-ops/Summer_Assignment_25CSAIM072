#include<stdio.h>
int main() 
{
    char str[100];
    int frequency[256] = {0};
    int i;
    char result = '\0';
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++) {
        frequency[(unsigned char)str[i]]++;
    }
    for(i = 0; str[i] != '\0'; i++) {
        if(frequency[(unsigned char)str[i]] == 1) 
        {
            result = str[i];
            break; 
        }
    }
    if(result != '\0')
    {
        printf("First non-repeating character is: %c\n", result);
    }else
    {
        printf("All characters are repeating.\n");
    }
return 0;
}