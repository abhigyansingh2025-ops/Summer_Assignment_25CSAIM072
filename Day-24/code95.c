#include<stdio.h>
int main() 
{
    char sentence[200], longestWord[50], currentWord[50];
    int i = 0, j = 0, maxLength = 0, currentLength = 0;
    printf("Enter a sentence: ");
    scanf(" %[^\n]", sentence);
    while(sentence[i] != '\0') {
        if(sentence[i] != ' ') {
            currentWord[j] = sentence[i];
            j++;
            currentLength++;
        }
        if(sentence[i] == ' ' || sentence[i + 1] == '\0') {
            currentWord[j] = '\0'; 
            if(currentLength > maxLength) {
                maxLength = currentLength;
                int k = 0;
                while(currentWord[k] != '\0') {
                    longestWord[k] = currentWord[k];
                    k++;
                }
                longestWord[k] = '\0';
            }
            j = 0;
            currentLength = 0;
        }
        i++;
    }
printf("The longest word is: %s\n", longestWord);
return 0;
}