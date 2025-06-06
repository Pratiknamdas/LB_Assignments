#include<stdio.h>

int MultiDigits(int iNo)
{
    int iDigit = 0, iMult = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo /10;
        if(iDigit == 0)
        {
            continue;
        }
        else
        {
           iMult = iMult * iDigit;
        }
        
        
    }
    return iMult;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);
     
    iRet = MultiDigits(iValue);
    printf("%d\n",iRet);

    return 0;
}