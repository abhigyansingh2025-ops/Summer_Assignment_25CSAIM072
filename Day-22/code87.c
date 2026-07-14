#include<stdio.h>
int main() 
{
    char str[100], ch;
    int i = 0, count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch);
    while (str[i] != '\0') 
    {
        if(str[i] == ch) 
        {
            count++;
        }
        i++;
    }
    printf("Frequency of '%c' = %d\n", ch, count);
return 0;
}