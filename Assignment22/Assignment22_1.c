#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    BOOL bFlag = FALSE;

    if((ch >= 'A') && (ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is not Character\n");
    }
    
    return 0;
}