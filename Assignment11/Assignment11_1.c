#include<stdio.h>

void Pattern(int iNo)
{
    char cCnt = '\0';
    int iCnt = 0;
    for(cCnt = 'A',iCnt = 1;iCnt<= iNo ;cCnt++,iCnt++)
    {
        printf("%c\t",cCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter the Number of Elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);
}