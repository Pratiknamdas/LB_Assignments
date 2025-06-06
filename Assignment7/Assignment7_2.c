#include<stdio.h>

int DollarToInr(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int Conversion = 0;
    Conversion = iNo * 70;

    return Conversion;

}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number of USD");
    scanf("%d",&iValue); 
    
    iRet = DollarToInr(iValue);
    printf("Value in INR is :%d\n",iRet);
    return 0;
}