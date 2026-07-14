#include<stdio.h>
int main() 
{
    int answer;
    int score = 0;
    printf("    Welcome to the Quick C Language Quiz!    \n\n");
    // Question 1
    printf("Q1. Which data type is used to store text/characters in C?\n");
    printf("1. int\n2. char\n3. float\n4. double\n");
    printf("Your answer (1-4): ");
    scanf(" %d", &answer); 
    if(answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 2 (char).\n\n");
    }
    // Question 2
    printf("Q2. Which symbol is used for a single-line comment in C?\n");
    printf("1. //\n2. /*\n3. #\n4. --\n");
    printf("Your answer (1-4): ");
    scanf(" %d", &answer); 
    if(answer == 1) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 1 (//).\n\n");
    }
    // Question 3
    printf("Q3. What is the index of the very first element in a C array?\n");
    printf("1. 1\n2. -1\n3. 0\n4. Depends on array size\n");
    printf("Your answer (1-4): ");
    scanf(" %d", &answer); 
    if(answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is 3 (0).\n\n");
    }
    // Final Results
    printf(" Quiz Completed! \n");
    printf("Your Final Score: %d out of 3\n", score);
    return 0;
}