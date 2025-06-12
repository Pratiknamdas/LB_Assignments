#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    BOOL bFLag = FALSE;

    if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
    {
        bFLag = 1;
    }
    else
    {
        bFLag = 0;
    }

    return bFLag;
}


int main()
{
    char cValue = '\0';
    BOOL bRet = 0;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Special Character\n");
    }
    else
    {
        printf("It is not a special character\n");
    }

    return 0;
}