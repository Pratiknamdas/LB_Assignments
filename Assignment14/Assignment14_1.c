#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt =1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++,iCnt++)
        {
            printf("%d\t",iCnt);
            if(iCnt >= 9)
            {
                iCnt =0;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Rows\n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns\n");
    scanf("%d",&iValue2);
    
    Pattern(iValue1, iValue2);
    
    return 0;
}