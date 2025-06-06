#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if((iNo)%2 == 0)
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
    int iValue;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("The Number %d is Even",iValue);
    }   
    else
    {
    printf("The Number %d is not Even",iValue);
    }

    return 0;
}