#include <stdio.h>
#include <stdlib.h>

int main()
{
    float poso;
    printf("diavase poso: ");
    scanf("%f",&poso);
    poso=(poso<100)*poso+(poso>100)*(poso-0.05*poso);
    printf("to poso pou tha plhrwsei einai: %.2f\n",poso);
    return 0;
}
