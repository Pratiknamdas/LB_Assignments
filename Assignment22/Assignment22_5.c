#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your Exam at 7Am\n");
        
    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your Exam at 8.30Am\n");
    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your Exam at 9.20Am\n");
    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your Exam at 9.20Am\n");
    }
}


int main()
{
    char cValue = '\0';

    printf("Enter you Division\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    
    return 0;
}