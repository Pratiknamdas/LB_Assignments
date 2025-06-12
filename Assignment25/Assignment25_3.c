#include<stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
            printf("%c",*str);
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
            printf("%c",*str);
        }
        else
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);

    strtogglex(Arr);


    return 0;
}