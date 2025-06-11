#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

   for(i = 0; i <= 255; i++)
   {
        printf("ASCII value of %c is %d \n",i,i);
   }
}


int main()
{

    DisplayASCII();    
    return 0;
}