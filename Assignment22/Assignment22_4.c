#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    BOOL bFlag = FALSE;

    if((ch >= 'a') && (ch <= 'z'))
    {
        bFlag = TRUE;
        
    }
    else
    {
        bFlag = FALSE;
    }
    return bFlag;
}


int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter The Character\n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }
    
    return 0;
}