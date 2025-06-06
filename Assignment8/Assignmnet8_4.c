#include<stdio.h>

double FahtoCS(float fTemp)
{
    double dCelcius = 0.0;
    dCelcius = ((fTemp -  32) * (5.0/9.0));
    return dCelcius;
}


int main()
{
    float fValue = 0.0f;
    double dRet =0.0;
    
    printf("Enter the Temperature in Fahrenheit\n");
    scanf("%f",&fValue);

    dRet = FahtoCS(fValue);

    printf("Temperature in Celcius is:%f\n",dRet);

    return 0;
}