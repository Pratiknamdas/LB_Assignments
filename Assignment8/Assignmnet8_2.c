#include<stdio.h>

double RectArea(float fWidht, float fHeight)
{
    double Area = 0.0;

    Area = fWidht * fHeight;

    return Area;

}

int main()
{
    float fValue1 = 0.0f, fValue2 =0.0f;
    double dRet = 0.0;

    printf("Enter width\t");
    scanf("%f",&fValue1);

    printf("Enter Height\t");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is %f\n",dRet);

    return 0;
}