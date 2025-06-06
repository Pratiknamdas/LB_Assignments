#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt1 = 0,iCnt2 = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, iCnt1 = 2,iCnt2 = 1; j <= iCol; j++)
        {
            if((i % 2) != 0)
            {
                printf("%d\t",iCnt1);
                iCnt1 = iCnt1 + 2;
                
            }
            else
            {
                printf("%d\t", iCnt2);
                iCnt2 = iCnt2 + 2;
               
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