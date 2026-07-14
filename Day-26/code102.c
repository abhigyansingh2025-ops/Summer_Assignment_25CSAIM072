#include<stdio.h>
int main() 
{
    int age, citizen_status;
    printf("   Voting Eligibility System    \n");
    printf("Enter your age: ");
    scanf("%d", &age); 
    printf("Are you a registered citizen? (Press 1 for Yes, 2 for No): ");
    scanf("%d", &citizen_status);
    if(age >= 18 && citizen_status == 1) 
    {
        printf("\nResult: You are ELIGIBLE to vote!\n");
    }
    else{
        printf("\nResult: You are NOT eligible to vote.\n");
        if(age < 18)
        {
            printf("Reason: You must be at least 18 years old.\n");
        }
        if(citizen_status != 1) 
        {
            printf("Reason: You must be a registered citizen.\n");
        }
    }
return 0;
}