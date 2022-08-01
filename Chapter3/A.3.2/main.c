#include <stdio.h>
#include <stdlib.h>

int main()
{
    float katathesh,epitokio;
    printf("dose katathesh ");
    scanf("%f",&katathesh);
    printf("dose epitokio %");
    scanf("%f",&epitokio);
    epitokio/=100;
    printf("meta apo ena xrono to poso einai: %.2f\n",katathesh+katathesh*epitokio*12);
    return 0;
}
