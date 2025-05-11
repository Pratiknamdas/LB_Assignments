#include<stdio.h>
#define TRUE 1
#define False 0

void Check (int iNo)
{
    if ((iNo % 5) == )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("ENter Number");
    scanf("%d",iValue);

    bRet = Check(iValue);
    if(bRet == true)
    {
        pritnf("Divisible by 5");

    }
    else
    {
        printf("Not Divisible by 5");

    }
    return 0;

}