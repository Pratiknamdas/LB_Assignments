#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iSize)
{
    int iCnt = 0, Flag = 0;
    for( iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            Flag = 1;
            break;
        } 
    } 
    return Flag;
}

int main()
{
    int iLength =0, iCnt = 0;
    int *p = NULL;
    BOOL  bRet = 0;

    printf("Enter the Number of Elements\t");
    scanf("%d",&iLength);

    p = (int*)malloc(iLength* sizeof(int));
    if( p == NULL)
    {
        printf("Unable to Allocate Memory\n");
        return -1;
    }
    
    printf("Enter the Elments\t");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p, iLength);

    if(bRet == 1)
    {
        printf("11 is Present\n");
    }
    else
    {
        printf("11 is Absent\n");
    }
    

    free(p);

    return 0;
}