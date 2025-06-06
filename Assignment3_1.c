#include<stdio.h>

int PrintEven(int iNo)
{
    if((iNo) <= 0)
    {
        return -1;
    }

    int iCnt = 0;
    int iNum = 0; 

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iNum);
        iNum += 2;
    }
    return 0;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the value : ");
    scanf("%d",&iValue);

    iRet = PrintEven(iValue);
    


    return 0;
}