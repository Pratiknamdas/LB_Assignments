#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iIndex = 0;
    
    if(Arr == NULL || iSize <=0)
    {
        printf("Invalid Input \n");
    }

    for( iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt]  == iNo)
        {
            iIndex = iCnt ;
            
        }
    }
    return iIndex;
}

int main()
{
    int iValue = 0, iLength =0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the Number of Elements\t");
    scanf("%d",&iLength);

    printf("Enter the Number\n");
    scanf("%d",&iValue);

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

    iRet = LastOcc(p, iLength,iValue);

    printf("Result is:%d \n",iRet);

    free(p);

    return 0;
}