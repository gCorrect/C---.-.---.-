#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,xil,ekat,dek,mon,ypol;
    scanf("%d",&a);
    xil=a/1000;
    ypol=a%1000;
    ekat=ypol/100;
    ypol=ypol%100;
    dek=ypol/10;
    mon=ypol%10;
    (xil==mon && ekat==dek) ?
    printf("antistrefete\n")
    :
    printf("den antistrefete");
    return 0;
}
