#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iSize)

{
    int iCnt = 0, iDigit = 0;

    if(Arr == NULL || iSize <=0)
    {
        printf("Invalid Input \n");
    }

   
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
            iDigit = Arr[iCnt] % 10;
            Arr[iCnt] == Arr[iCnt] / 10;

            if(iDigit == 3)
            {
                printf("%d\t",Arr[iCnt]);
            }        
            
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

    Digits(p, iLength);

    free(p);

    return 0;
}