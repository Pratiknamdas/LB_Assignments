#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char cCnt1 ='\0', cCnt2 ='\0';
    for(i = 1; i <= iRow;i++)
    {
        for(j = 1,cCnt2 = 'a',cCnt1 = 'A'; j <= iCol; cCnt1++,cCnt2++, j++)
        {
            if((i % 2) != 0)
            {
                printf("%c\t",cCnt1);
            }
            else
            {
                printf("%c\t",cCnt2);
            }
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