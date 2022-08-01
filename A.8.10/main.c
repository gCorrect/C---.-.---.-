#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,a[]={10,20,30,40,50},*p=a;
    while(&p[i]<a+5)
    {
        (*(p+i))++;
        p++;
        i++;
    }
    for(i=0;i<5;i++)
    {
       printf("%d ",a[i]);
    }
    printf("Hello world!\n");
    return 0;
}
