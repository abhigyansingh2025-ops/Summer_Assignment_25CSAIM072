#include<stdio.h>
int main() 
{
    char str[100];
    int length = 0, isPalindrome = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    while(str[length] != '\0') 
    {
        length++;
    }
    int start = 0;
    int end = length - 1;
    while(start < end)
    {
        if(str[start] != str[end])
        {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }
    if(isPalindrome == 1)
    {
        printf("The string is a palindrome.\n");
    }else
    {
        printf("The string is not a palindrome.\n");
    }
return 0;
}