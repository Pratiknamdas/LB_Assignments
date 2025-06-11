#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;
    
    if(Arr == NULL || iSize <=0)
    {
        printf("Invalid Input \n");
    }

    for( iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
        {
           printf("%d\t",Arr[iCnt]);            
        }
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0,iValue2 = 0, iLength =0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the Number of Elements\t");
    scanf("%d",&iLength);

    printf("Enter the Starting point\n");
    scanf("%d",&iValue1);

    printf("Enter the Ending point\n");
    scanf("%d",&iValue2);

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

    Range(p, iLength);


    free(p);

    return 0;
}