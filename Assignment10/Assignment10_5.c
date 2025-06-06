#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0, iEven = 0, iOdd = 0, iDiff = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEven=  iEven + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }
        iNo = iNo /10;
    }
    iDiff = iEven - iOdd;
    return iDiff;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);
     
    iRet = CountRange(iValue);
    printf("%d\n",iRet);

    return 0;
}