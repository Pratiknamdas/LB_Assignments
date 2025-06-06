#include<stdio.h>
int FactRev(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = (iNo / 2); iCnt >=1 ; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}