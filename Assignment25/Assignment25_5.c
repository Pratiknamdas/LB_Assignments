#include<stdio.h>

int DisplayDigit(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    iRet = DisplayDigit(Arr);

    printf("%d\n",iRet);

    return 0;
}