#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("*\t"    );
        
    }
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("#\t");
        
    }
    printf("\n");

}

int main()
{
    int iValue = 0;
    printf("ENter Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}