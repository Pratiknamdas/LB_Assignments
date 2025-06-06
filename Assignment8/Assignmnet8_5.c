#include<stdio.h>

double SquareMeter(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    double iSquareMeter = 0.0;

    iSquareMeter = iNo * 0.0929;
    return iSquareMeter;
}
int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter Area in Square Feet");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square Metere is:%f\n",dRet);

    return 0;
}