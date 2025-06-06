#include<stdio.h>

int FactDiff(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0, NFSum = 0, FSum = 0;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt)== 0)
        {
            FSum = FSum + iCnt;
        }
        else
        {
            NFSum = NFSum + iCnt;
        }
        
    }
   
   
    return FSum - NFSum;
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet =FactDiff(iValue);

    printf("%d\n",iRet);


    return 0;
}