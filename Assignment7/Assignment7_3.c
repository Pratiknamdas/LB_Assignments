#include<stdio.h>

int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0, iFact = 1;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact =  iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial Number is:%d \n",iRet);
    return 0;
}