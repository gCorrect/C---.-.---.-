#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1,*p2,*p3,i,j,k;
    p1=&i;
    p2=&j;
    p3=&k;
    scanf("%d",p1);
    do
    {
        printf("dose mikrotero apo %d",*p1);
        scanf("%d",p2);
    }while(*p2>=*p1);
    do
    {
        printf("dose mikrotero apo %d",*p2);
        scanf("%d",p3);
    }while(*p3>=*p2);
    printf("%d %d %d",*p1,*p2,*p3);
    return 0;
}
