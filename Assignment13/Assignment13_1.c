#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char cCnt ='\0';
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,cCnt = 'A'; j <= iCol; cCnt++, j++)
        {
            printf("  %c",cCnt);
        }
        printf(" \n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 =0;
    printf("Enter the Number of Rows\n");
    scanf("%d",&iValue1);

    printf("Enter the Number of Columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}