#include<stdio.h>

int Difference(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("%d\n",iRet);

    return 0;
}