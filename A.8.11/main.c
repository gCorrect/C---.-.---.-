#include <stdio.h>
#include <stdlib.h>

int main()
{
    double arr[]={1.30,-20,3.30,6,7.7},*p1=arr,*p2=arr+4,temp;
    for(;p1<p2;p1++)
        {
            temp=*p1;
            *p1=*p2;
            *p2=temp;
            p2--;
        }
    for(p1=arr; p1 <arr+5; p1++)
    printf("%f\n", *p1);

    return 0;
}
