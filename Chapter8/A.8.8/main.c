#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1,*p2,*p3,i,num,min,max;
    p1=&num;
    p2=&min;
    p3=&max;
    *p2=-5;
    *p3=10;
    for(i=0;i<10;i++)
    {
        scanf("%d",p1);
        if (*p1<*p2)
            *p2=*p1;
        if (*p1>*p3)
            *p3=*p1;
    }
    if (*p2==-5)
        printf("den yparxei mikroteros tou -5\n");
    else
        printf("o miktoteros einai o %d\n",*p2);
    if (*p3==10)
        printf("den yparxei megalyteros tou 10\n");
    else
        printf("o megalyteros einai o %d\n",*p3);
    printf("Hello world!\n");
    return 0;
}
