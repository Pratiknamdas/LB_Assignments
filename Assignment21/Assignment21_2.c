#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)

{
    int iCnt = 0, iMin = 0;

    if(Arr == NULL || iSize <=0)
    {
        printf("Invalid Input \n");
        return -1;
    }

    iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        
    }
    return iMin;
   
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

    iRet = Minimum(p, iLength);

    printf("Minimum Element is : %d\n",iRet);

    free(p);

    return 0;
}