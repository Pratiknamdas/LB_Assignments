#include<stdio.h>

int KMtoMeter(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iMeter = 0;

    iMeter = iNo * 1000;
    return iMeter;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Metere is:%d\n",iRet);

    return 0;
}