#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0, iCnt = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0 )
        {
            iCnt++;
        }
        iNo = iNo /10;
    }
    return iCnt;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);
     
    iRet = CountOdd(iValue);
    printf("%d\n",iRet);

    return 0;
}