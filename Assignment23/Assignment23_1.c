#include<stdio.h>

void DisplayASCII(char ch)
{
    

    if((ch >= 0) && (ch <= 255))
    {
        printf("%c\n",ch);
    }
    else
    {
        printf("Invalid input\n");
    }
}


int main()
{
    char cValue = '\0';
    

    printf("Enter The Character\n");
    scanf("%c",&cValue);

    DisplayASCII(cValue);


    
    return 0;
}