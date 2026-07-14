#include<stdio.h>
#include<string.h>
int main() 
{
    char names[5][50], temp[50];
    int i, j;
    printf("Enter 5 names:\n");
    for(i = 0; i < 5; i++) {
        scanf("%s", names[i]);
    }
    // Bubble sort to arrange alphabetically
    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            // If names[i] is alphabetically greater than names[j]
            if(strcmp(names[i], names[j]) > 0) 
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("\nNames in alphabetical order:\n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }
return 0;
}