#include<stdio.h>

#define TRUE 1;
#define FALSE 0;

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;
    BOOL Flag = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        // printf("%d\n",iDigit);
        if(iDigit == 0)
            {
                Flag = 1;
            }
        

        iNo = iNo / 10;

        
    
    }
    
    return Flag;
    
}

int main()
{
    int iValue =0;
    BOOL bRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == 1)
    {
        printf("It contains Zero\n");
    }
    else
    {
        printf("It does not contain Zero\n");
    }
    
    return 0;
}