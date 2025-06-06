#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    BOOL bFlag = FALSE;

    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital\n");
    }
    else
    {
        printf("It is not Capital\n");
    }
    
    return 0;
}