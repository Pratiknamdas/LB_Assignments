#include<stdio.h>

int CountCapital(char *str)
{
    int iCapitalCnt = 0, iSmallCnt = 0, iDiff = 0;
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapitalCnt++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCnt++;
        }
        str++;
    }
    iDiff = iSmallCnt - iCapitalCnt;
    return iDiff;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("%d\n",iRet);

    return 0;
}