#include<stdio.h>

int MultFact(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    int Mult = 1;
    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0 )
        {
            Mult = Mult * iCnt;  
        }
    }
    return Mult;

}

int main()
{
    int iValue = 0;
    

    printf("Enter Number\n");
    scanf("%d", &iValue);

    int iRet = 0;

    iRet = MultFact(iValue);
    printf("%d \n",iRet);

    return 0;
}