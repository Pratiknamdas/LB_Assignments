#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0, iMult = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMult = 2 * iCnt;
        printf("%d\t",iMult);
    }
    printf("\n");
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Pattern(iValue);
}