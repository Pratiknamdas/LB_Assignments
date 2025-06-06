#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char cCnt = '\0';

    for(i = 1, cCnt = 'A'; i <= iRow; i++,cCnt++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",cCnt);
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