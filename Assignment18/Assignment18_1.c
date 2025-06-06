#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0, iEven = 0, iOdd = 0;
    for( iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iOdd = iOdd + Arr[iCnt];
        }
        else
        {
            iEven = iEven + Arr[iCnt];
        }
    }
    iSum = iEven - iOdd;
    return iSum;
}

int main()
{
    int iLength =0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the Number of Elements\t");
    scanf("%d",&iLength);

    p = (int*)malloc(iLength* sizeof(int));
    if( p == NULL)
    {
        printf("Unable to Allocate Memory\n");
        return -1;
    }
    
    printf("Enter the Elments\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iLength);

    printf("Result is:%d \n",iRet);

    free(p);

    return 0;
}