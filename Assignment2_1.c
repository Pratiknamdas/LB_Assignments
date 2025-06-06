#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;


    while (iCnt < iNo)
    {
        print("*");
        iCnt++;
    }
}


int main()
{
    int iValue = 0;
    printf("Enter the Number");
    scanf("%d",iValue);

    Dsiplay(iValue);
     return 0;
}