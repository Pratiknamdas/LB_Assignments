#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iSize)

{
    int iCnt = 0, iDigit = 0, iSum = 0;

    if(Arr == NULL || iSize <=0)
    {
        printf("Invalid Input \n");
    }

   
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
            while(Arr[iCnt] != 0)
            {
                iDigit = Arr[iCnt] % 10;
            

                iSum = iSum + iDigit;
                Arr[iCnt] = Arr[iCnt] / 10;
            }        
            printf("%d\t",iSum);
            iSum = 0;
    }
    printf("\n");
    
   
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

    DigitsSum(p, iLength);

    free(p);

    return 0;
}