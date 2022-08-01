#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int main()
{
    float avg;
    int i,arr[SIZE],sum=0,p1=0,p2=0;
    for(i=SIZE-1;i>=0;i--)
    {
        scanf("%d",&arr[i]);
        if (arr[i]>arr[SIZE-1])
            p1++;
        sum+=arr[i];
    }
    avg=1.0*sum/SIZE;
    for(i=SIZE-1;i>=0;i--)
    {
        if (arr[i]>avg)
            p2++;
    }
    printf("\n\n%d\n%d \n",p1,p2);
    return 0;
}
