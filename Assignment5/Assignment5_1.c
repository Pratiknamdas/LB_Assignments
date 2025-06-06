#include<stdio.h>

void Pattern(int iNO)
{

    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNO; iCnt++)
    {
        printf("$\t*\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}