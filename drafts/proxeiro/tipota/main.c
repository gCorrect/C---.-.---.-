#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,a,dx,xil,ekat,dek,mon,ypol;
    do
    {
        scanf("%d",&a);
    }while(a<-99999 || a>99999 );
    if (a<0)
        printf("minus ");
        switch(a/10000)
        {
        case 0:
    break;
        case 1:
            printf("one ");
         break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
    }
    ypol=a%10000;
    xil=ypol/1000;
    switch(xil)
        {
        case 0:
            printf("zero ");
    break;
        case 1:
            printf("one ");
         break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
    }
    ypol=a%1000;
    xil=ypol/100;
    switch(xil)
        {
        case 0:
            printf("zero ");
    break;
        case 1:
            printf("one ");
         break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
    }
     ypol=a%100;
    xil=ypol/10;
    switch(xil)
        {
        case 0:
            printf("zero ");
    break;
        case 1:
            printf("one ");
         break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
    }
    xil=a%10;
    switch(xil)
        {
        case 0:
            printf("zero ");
    break;
        case 1:
            printf("one ");
         break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
    }
    return 0;
}
