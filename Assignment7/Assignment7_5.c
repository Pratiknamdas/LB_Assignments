#include<stdio.h>

int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0, iEFact1 = 1, iOFact2 = 1, iDiff = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEFact1 =  iEFact1 * iCnt;
        }
        else
        {
            iOFact2 =  iOFact2 * iCnt;
        }
        iDiff = iEFact1 - iOFact2;
    }
    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial Diffenrence  is:%d \n",iRet);
    return 0;
}