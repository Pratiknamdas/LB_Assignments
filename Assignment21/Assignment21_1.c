#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)

{
    int iCnt = 0, iMax = 0;

    if(Arr == NULL || iSize <=0)
    {
        printf("Invalid Input \n");
    }

   
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        
    }
    return iMax;
   
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
    
    printf("Enter the Elments\t");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Maximum(p, iLength);

    printf("Maximum Element is : %d\n",iRet);

    free(p);

    return 0;
}