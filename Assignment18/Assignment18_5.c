#include<stdio.h>
#include <stdlib.h>

int Display(int Arr[], int iSize)
{
    int iCnt = 0;
    for( iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 11) == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n"); 
}

int main()
{
    int iLength = 0, iCnt = 0, iRet =0;
    int *p = NULL;

    printf("Enter the Number of Elements:\t");
    scanf("%d", &iLength);

    p = (int *)malloc(iLength * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to allocate Memory\n");
        return -1;
    }

    printf("Enter the Elements\t");
    for( iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Display(p, iLength);

    free(p);
    
    return 0;
}