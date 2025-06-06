#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckVowel(char cCh)
{

    if((cCh == 'a') || (cCh == 'e') || (cCh == 'i') || (cCh == 'o') || (cCh == 'u') || (cCh == 'A') || (cCh == 'E') || (cCh == 'I') || (cCh == 'O') || (cCh == 'U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{

    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("The entered character is a vowel.");

    }
    else
    {
        printf("The entered character is not a vowel.");
    }

    return 0;

}